

THStack* newstack(THStack* EvisHist){
	TList* l1 = EvisHist->GetHists();
	TH1D* h1 = (TH1D*) l1->At(0);
	TH1D* h2 = (TH1D*) l1->At(1);
	TH1D* h3 = (TH1D*) l1->At(2);
	TH1D* h4 = (TH1D*) l1->At(3);
	TH1D* h5 = (TH1D*) l1->At(4);
	h5->SetFillColor(9);	
	h4->SetFillColor(13);	
	h3->SetFillColor(6);
	h2->SetFillColor(7);
	h1->SetFillColor(1);
	
	h5->SetLineColor(1);
	h4->SetLineColor(1);
	h3->SetLineColor(1);
	h2->SetLineColor(1);
	h1->SetLineColor(1);

	/*h5->SetMarkerStyle(20);
	h4->SetMarkerStyle(21);
	h3->SetMarkerStyle(22);
	h2->SetMarkerStyle(23);
	h1->SetMarkerStyle(29);
	*/

	h1->SetLineWidth(2);
	h2->SetLineWidth(2);
	h3->SetLineWidth(2);
	h4->SetLineWidth(2);
	h5->SetLineWidth(2);
	//EvisHist->Draw("HIST");
	THStack* EvisHist2= new THStack("hs","");
	EvisHist2->Add(h1);
	EvisHist2->Add(h2);
	EvisHist2->Add(h3);
	EvisHist2->Add(h4);
	EvisHist2->Add(h5);

	return EvisHist2;
}

void macro3(){

	//h5 = signal, h4 = 2f, h3=4f,  h2=6f, h1=higgs
	TFile* f = new TFile("stackout.root");
	
	THStack* EvisHist = (THStack*) f->Get("EvisHist");
	THStack* EvisHist2 = newstack(EvisHist);
	TCanvas* c1 = new TCanvas();
	EvisHist2->Draw("HIST E");
	EvisHist2->SetTitle(";Total visible energy E_{vis} GeV;N Events");
	
	THStack* nLepHist = (THStack*) f->Get("nLepHist");
	THStack* nLepHist2 = newstack(nLepHist);
	TCanvas* c2 = new TCanvas();
	nLepHist2->Draw("HIST E");
	nLepHist2->SetTitle(";N tight leptons;N Events");
	auto legend = new TLegend(0.1,0.7,0.48,0.9);
	TList* l1 = nLepHist2->GetHists();
	legend->AddEntry((TH1D*) l1->At(4),"Signal","f");
	legend->AddEntry((TH1D*) l1->At(3),"2 ferm","f");
	legend->AddEntry((TH1D*) l1->At(2),"4 ferm","f");
	legend->AddEntry((TH1D*) l1->At(1),"6 ferm","f");
	legend->AddEntry((TH1D*) l1->At(0),"SM Higgs","f");
//	legend->AddEntry(hicut,"y_{cut} 5#times10^{-6}","lp");
	legend->Draw();
	


	THStack* PtvisHist = (THStack*) f->Get("PtvisHist");
	THStack* PtvisHist2 = newstack(PtvisHist);
	TCanvas* c3 = new TCanvas();
	PtvisHist2->Draw("HIST E");
	PtvisHist2->SetTitle(";Total transverse momentum P_{T} GeV;N Events");

	THStack* mwhadHist = (THStack*) f->Get("mwhadHist");
	THStack* mwhadHist2 = newstack(mwhadHist);
	TCanvas* c4 = new TCanvas();
	mwhadHist2->Draw("HIST E");
	mwhadHist2->SetTitle(";M_{W}^{qq} GeV;N Events");
	legend = new TLegend(0.1,0.7,0.48,0.9);
	 l1 = nLepHist2->GetHists();
	legend->AddEntry((TH1D*) l1->At(4),"Signal","f");
	legend->AddEntry((TH1D*) l1->At(3),"2 ferm","f");
	legend->AddEntry((TH1D*) l1->At(2),"4 ferm","f");
	legend->AddEntry((TH1D*) l1->At(1),"6 ferm","f");
	legend->AddEntry((TH1D*) l1->At(0),"SM Higgs","f");
	legend->Draw();

	THStack* EcomHist = (THStack*) f->Get("EcomHist");
	THStack* EcomHist2 = newstack(EcomHist);
	TCanvas* c5 = new TCanvas();
	EcomHist2->Draw("HIST E");
	EcomHist2->SetTitle(";Center of mass energy E_{com} GeV;N Events");

	THStack* ntracksHist = (THStack*) f->Get("ntracksHist");
	THStack* ntracksHist2 = newstack(ntracksHist);
	TCanvas* c6 = new TCanvas();
	ntracksHist2->Draw("HIST E");
	ntracksHist2->SetTitle(";Track Multiplicity;N Events");
	
	THStack* qcostHist = (THStack*) f->Get("qcostHist");
	THStack* qcostHist2 = newstack(qcostHist);
	TCanvas* c7 = new TCanvas();
	qcostHist2->Draw("HIST E");
	qcostHist2->SetTitle(";-qcos#theta;N Events");
	
	THStack* vrecoilHist = (THStack*) f->Get("vrecoilHist");
	THStack* vrecoilHist2 = newstack(vrecoilHist);
	TCanvas* c8 = new TCanvas();
	vrecoilHist2->Draw("HIST E");
	vrecoilHist2->SetTitle(";m_{recoil}^{vis} GeV^{2};N Events");

	THStack* mwhadCutsHist = (THStack*) f->Get("mwhadCutsHist");
	THStack* mwhadCutsHist2 = newstack(mwhadCutsHist);
	TCanvas* c9 = new TCanvas();
	mwhadCutsHist2->Draw("HIST E");
	mwhadCutsHist2->SetTitle(";M_{W}^{qq} GeV;N Events");
	 legend = new TLegend(0.1,0.7,0.48,0.9);
	l1 = nLepHist2->GetHists();
	legend->AddEntry((TH1D*) l1->At(4),"Signal","f");
	legend->AddEntry((TH1D*) l1->At(3),"2 ferm","f");
	legend->AddEntry((TH1D*) l1->At(2),"4 ferm","f");
	legend->AddEntry((TH1D*) l1->At(1),"6 ferm","f");
	legend->AddEntry((TH1D*) l1->At(0),"SM Higgs","f");
	legend->Draw();

}
