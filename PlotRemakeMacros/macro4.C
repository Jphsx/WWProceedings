

//mdiffhist
//cut0_0_0

void macro4(){
	TFile* f1 = TFile::Open("optPlots.root");
	TFile* f2 = TFile::Open("stackout.root");

	//cut0_0_0 is mass diff with gen, reconstruction has no pre selection or overlay removal
	TH1D* h1 = (TH1D*) f1->Get("cut0_0_0");
	TH1D* h2 = (TH1D*) f2->Get("mdiffhist");

	//TH1D* newh1 = new TH1D("newh1"," ",100,-100,100);
	h1->Rebin(4);
	TCanvas* c = new TCanvas();
	h1->SetLineWidth(2);
	h2->SetLineWidth(2);
	h1->Scale(1./h1->Integral() );
	h2->Scale(1./h2->Integral() );

	
		h1->SetLineColor(kRed);
	h2->SetTitle("Measured and Gen. Mass Difference; M^{meas}_{qq} - M^{gen}_{qq} [GeV]; 1/N dN/dM");
	h2->Draw("HIST E");
	h1->Draw("HIST E SAME");
	auto legend = new TLegend(0.1,0.7,0.48,0.9);
	legend->SetHeader("WW#rightarrow qq#mu#nu eLpR","C");
	legend->AddEntry(h1,"Excluding #gamma #gamma removal and selection","l");
	legend->AddEntry(h2,"Including #gamma #gamma removal and selection","l");
	legend->Draw();
}
