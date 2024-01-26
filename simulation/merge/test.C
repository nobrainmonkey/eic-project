
#include <TFile.h>
#include <TROOT.h>
#include <TSystem.h>
#include <TTree.h>
#include <iostream>
#include <vector>

void LoadLibraries() {
  if (gSystem->Load("/usr/local/lib/libedm4eic.so") >= 0) {
    std::cout << "Loaded libedm4eic.so successfully." << std::endl;
  } else {
    std::cerr << "Failed to load libedm4eic.so." << std::endl;
  }

  if (gSystem->Load("/usr/local/lib/libedm4hep.so") >= 0) {
    std::cout << "Loaded libedm4hep.so successfully." << std::endl;
  } else {
    std::cerr << "Failed to load libedm4hep.so." << std::endl;
  }

  if (gSystem->Load("/usr/local/lib/libedm4eicDict.so") >= 0) {
    std::cout << "Loaded libedm4eicDict.so successfully." << std::endl;
  } else {
    std::cerr << "Failed to load libedm4eicDict.so." << std::endl;
  }

  if (gSystem->Load("/usr/local/lib/libedm4hepDict.so") >= 0) {
    std::cout << "Loaded libedm4hepDict.so successfully." << std::endl;
  } else {
    std::cerr << "Failed to load libedm4hepDict.so." << std::endl;
  }

  gSystem->Load("libCalorimeterHitDataDict.so");
}

void CopyBranch(const char *sourceFile, const char *sourceTreeName,
                const char *branchName, const char *destFile,
                const char *destTreeName) {
  LoadLibraries();

  // Open the source file and get the source tree
  TFile *sourceRootFile = new TFile(sourceFile, "READ");
  TTree *sourceTree = (TTree *)sourceRootFile->Get(sourceTreeName);

  // Set up a pointer to a vector of CalorimeterHitData
  vector<edm4eic::CalorimeterHitData> *branchData = nullptr;
  sourceTree->SetBranchAddress(branchName, &branchData);

  // Open the destination file and get the destination tree
  TFile *destRootFile = new TFile(destFile, "UPDATE");
  TTree *destTree = (TTree *)destRootFile->Get(destTreeName);

  // Create a new branch in the destination tree
  TBranch *newBranch = destTree->Branch(branchName, &branchData);

  // Copy the data from the source branch to the new branch
  Long64_t nEntries = sourceTree->GetEntries();
  for (Long64_t i = 0; i < nEntries; ++i) {
    sourceTree->GetEntry(i);
    newBranch->Fill();
  }

  // Save the changes to the destination file
  destRootFile->Write("", TObject::kOverwrite);
  sourceRootFile->Close();
  destRootFile->Close();

  delete sourceRootFile;
  delete destRootFile;
}

void test() {
  CopyBranch("RC_80469.root", "events", "HcalEndcapNRecHits", "MC_80469.root",
             "events");
  CopyBranch("RC_80469.root", "events", "EcalEndcapNRecHits", "MC_80469.root",
             "events");
}
