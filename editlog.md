
Jenny's comments from first draft

- as a general remark, the document is very sparse on references, especially in the introduction, section 2 and the discussion at the end

	>>added reference to TDR
	--add references to OPAL
	-- add references to lumi error and stuff in discussion
	>> added reference to pythia6
	-- add reference to OL from daniel's paper

- for Fig 5, Sec 3.2 (detector) and Sec 3.3 (software and MC samples) cite IDR. Especially for the MC, explicitly say that you're using samples produced
   for the IDR benchmarking effort.

	>> Changed TDR refrence in figure 5 to IDR, Added IDR reference with comment "The Monte Carlo samples being used are for the Interim Design Report benchmarking effort"


- some parts read rather like a draft for a thesis than like a proceedings or an ILD note, in particular section 2 and 3. I'd recommend to shorten
   them significantly. Also in several cases the (sub)section titles don't match the content, e.g. Sec 2.1 is called W boson but speaks about taus

	>> shortened section 2.1 (physics) and reorganized the content
    >> removed section on cross-section and non-signal like cross-section contribution diagrams
    >> Merging Anatomy of an event into overall physics section
	-- add reference about cross section %, interference, non resonant qqlnu (non signal-like)
	>> removed accelerator description and most of detector (ILD/SID) descriptions
	>> modeled section 3 after ILD-PHYS-PUB-2019-011
	>> added pythia 6, -- need to add reference


- in some places numbers are missing. E.g. in Sec 2.2 - beam effects the decisive number of <N>=1.05 overlay events/BX is never mentioned.
   in combination with using the LHC term of pile-up, this gives the impression like we were talking tens or hundreds of overlay events
	
	>> add 1.1 events per crossing comment with a reference to TDR (taken from page 93)
	>> changed all references of pile-up to "overlay"


- the Feynman diagrams in Figs 1, 2, 3 look very different in style -> unify?
	 
	>> removed qqlnu non-signal like final state diagrams, removed polarization diagrams


- in Sec 4.1, there are too many details given on the polarisation weighting ("thesis-style"). The actual "Analysis Overview" promised by the title
   is missing, though - I'd expected here an explanation of the general strategy (generic lepton ID for e,mu,tau, followed by overlay removal, event selection,
   fitting of W mass peak).
	
	>> removed detailed description of polarazation, added important components to section 3, MC and detector desc.
	>> section now begins with acutal analysis strategy 
	-- need to elaborate on strategy a little


- bullet list on top of page 10 out of context?

	>> bullet list was removed and reformulated in text in section 4


- eq (5) and (6) contain undefined variables

	>> reorganized equation text to come before eqns and explicitly added definition for Nmatch,Nfake,NStotal, NBtotal


- Sec 4.3 "mismeasurements of particles .... Neither of these effects should create a systematic excess...": careful - PFlow confusion can go both ways, so not
    only can cause a loss, but can lead to double counting of neutral hadrons. Maybe reformulate.

	>>reformulated to say "This effect (referring to pf confusion) is not substantial enought to account for the systematic excess observed in reconstruction as shown in Figure 8"
	-- possibly add a mass distribution, this makes figure reference out of order


- the strategy to remove overlay via the JADE algorithm and a mass cut-off is very interesting. However the description should be improved.
   Eg it does not become clear why the whole event is clustered into one jet with y_cut = 10^-3. And Q^2 must be an energy SQUARED ?
   (very simple-minded calculation: WW->qqlnu back-to-back, no ISR, no overlay, lepton removed already from PFO list
    => Q= E(had W) = 250 GeV, M(had W)= 80 GeV => y (whole W in one jet) = (80/250)^2 ~= 0.1 >> 0.001 )
   Also plots of the p_Tjet and |costheta_jet| distributions with W-jets and overlay jets shown separately would be nice.

	>> updated according to fast jet user manual, changed reference from jade paper (slightly inconsistent ycuts)
	>> M^2/Q^2 is now yij = dij/Q^2 where dij=2EiEj(1-costheta) and ycut = dcut/Q^2


- Fig 11: how do you define the "true mass"? The labeling indicates you take the invariant mass of the quarks from the W, i.e. before PS/hadronisation?
    or do you use the TrueJet processor (as you should ;-) ) - or do you run the same JADE algorithm on the generator stable MCParticles, or.... ?

	>>added a description for gen level hadronic mass determination
	>> slightly reformulated caption

- show plots of all final selection variables for S and B (p 16)


- Sec 4.5, stat err on xsection: At least put this in perspective with uncertainties from lumi and pol measurement, citing the appropriate references

  

- discussion and conclusion: cite studies from Robert, Ivan, Takahiro (JES), mention TaJet as alternative tau finder


- in general: please use ILD style for all plots (not only logo in corner, but all the rest of the style as well)


- carefully check for inconsistent naming of variables etc, eg p_T vs P_T, m^vis_recoil vs m_\nurecoil, and many others
- I also hate subscript text in mathmode... make it eg E_{\mathrm{vis}} etc, and use $\sin{}$ etc




- spell checking wouldn't harm ;-)

