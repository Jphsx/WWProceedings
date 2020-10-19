


void macro2(){

	TFile* f = new TFile("optPlots.root");

	TH1D* locut = (TH1D*) f->Get("cut0_4_11");
	TH1D* goodcut = (TH1D*) f->Get("cut5_4_11");
	TH1D* hicut = (TH1D*) f->Get("cut7_4_11");

	locut->SetLineWidth(2);
	locut->SetLineColor(2);

	goodcut->SetLineWidth(2);
	goodcut->SetLineColor(4);

	hicut->SetLineWidth(2);
	hicut->SetLineColor(1);

	
	goodcut->Draw();
	locut->Draw("SAME");	
	hicut->Draw("SAME");
	
	auto legend = new TLegend(0.1,0.7,0.48,0.9);
	legend->SetHeader("WW#rightarrow qq#mu#nu eLpR");
	legend->AddEntry(locut,"y_{cut} 1#times10^{-3}","lp");
	legend->AddEntry(goodcut,"y_{cut} 5#times10^{-5}","lp");
	legend->AddEntry(hicut,"y_{cut} 5#times10^{-6}","lp");
	legend->Draw();
	//masscut0_0_0
	//masscut5_4_11

	TH1D* masslo = (TH1D*) f->Get("masscut0_0_0");
	TH1D* massgood = (TH1D*) f->Get("masscut5_4_11");
	massgood->SetLineWidth(2);
	massgood->SetLineColor(4);
	masslo->SetLineWidth(2);
	masslo->SetLineColor(2);
	TCanvas* c2 = new TCanvas();
	massgood->Draw();
	masslo->Draw("SAME");

	legend = new TLegend(0.1,0.7,0.48,0.9);
	legend->SetHeader("WW#rightarrow qq#mu#nu eLpR");
	legend->AddEntry(goodcut,"y_{cut} 5#times10^{-5}  P_{T} > 2 GeV","lp");
	legend->AddEntry(locut,"Raw Reconstruction","lp");
	
	legend->Draw();

}
