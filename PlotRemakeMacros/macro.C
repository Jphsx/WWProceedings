

void macro(){

	//remake tau energy and matching angle plots
	TFile* f1 = new TFile("/home/bears/work/research/WWbenchmark/tauFinder_eff/optimalTrees/muon/lepenergy.root");
	
	TH1D* lepEtrue = (TH1D*) f1->Get("lepEtrue");
	TH1D* lepEfake = (TH1D*) f1->Get("lepEfake");
	lepEtrue->Scale(1./lepEtrue->Integral());
	lepEfake->Scale(1./lepEfake->Integral());
	TCanvas* c1 = new TCanvas();//"c1",800,600);
	lepEfake->SetStats(false);
	lepEfake->SetLineColor(kRed);
	lepEfake->SetFillColor(46);
	lepEfake->SetFillStyle(3144);
	lepEfake->SetLineWidth(2);
//	lepEtrue->SetFillStyle(3007);
//	lepEtrue->SetFillColor(9);
	lepEtrue->SetLineWidth(2);
	lepEfake->Draw("HIST E");	
	lepEtrue->Draw("HIST E SAME");

	auto legend = new TLegend(0.1,0.7,0.48,0.9);
	legend->AddEntry(lepEtrue,"True Lepton Candidate","lp");
	legend->AddEntry(lepEfake,"Fake Lepton Candidate","lp");
	legend->Draw();

	TFile* f2 = new TFile("/home/bears/work/research/WWbenchmark/tauFinder_eff/optimalTrees/muon/compplots.root");
	
	TH1D* matchingangle = (TH1D*) f2->Get("matchingangle");
	TCanvas* c2 = new TCanvas();
	matchingangle->SetLineWidth(2);
	matchingangle->SetLineColor(kBlack);
	matchingangle->Draw("HIST E");	



	//remake jet optimization plots 
	//TFile* f3 = new TFile("/home/bears/work/research/WWbenchmark/ILDbench_WWqqlnu/macros/WqqJetOptimizationmacros/plotter.C");
	

}
