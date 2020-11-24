
Changes from official review:

- general It would  have been great if the draft had line numbers.

- Title page Could you add “on behalf of the ILD concept group” ?

Page 1

- Chapter 1, line 10: insert a space couplings(TGCs) —> couplings (TGCs)
	>> updated

- Chapter 1, line 11: the Standard Model —> the standard model (to be consistent with line 3 and others)
	>> added standard mdoel (SM) to define SM on line 3
	>> lowered sm case

- Chapter 1, line 13: at center of mass energy —> at a center of mass energy
	>> updated

- Chapter 2, line 2 $WW$ —> WW ? (to be consistent with others)
	>> changed all occurences of $WW$ to WW 

- Chapter 2, line 5 The diagrams representing WW —> The diagrams representing the WW production
	>> changed to "The diagrams representing WW production"
Page 2

- Figure 1, caption the s and t channels —> the $s$ and $t$ channels
	>> updated
Page 3

- Chapter 2, line 3 from the bottom t-channel —> $t$-channel
	>> updated

- Chapter 3, line 8 the ILD Technical Design Report —> the ILD Detailed Baseline Design
	>> updated
Page 4

- 4,1 line 1 for semileptonic WW —> for the semileptonic mode (or for the semileptonic decay)
	>> updated to "for the semileptonic mode"

- 4.2 line 9: insert a space Collider(CLIC) —> Collider (CLIC)
	>> updated

- itemization, item 2 w.r.t to —> with respect to
	>> updated

- itemization, item 4 Invariant Mass —> Invariant mass
	>> updated

Page 5

- I would move Figure 2 on page 7 to page 5.
	>>latex very much insists this figure not move :(

- line 2: insert a space Particle Flow Objects(PFO) —> Particle Flow Objects (PFO)
	>> updated

- the sentence the beginning of 2nd paragraph. a one size fits all approach —> a one-size-fits-all approach
	>> updated

- line 3 from the bottom The invariant mass —> The invariant mass upper limit (?)
	>> added upper limit
- the bottom line line break may not be necessary here.
	>> removed line break

Page 6

- line 10 from the bottom: insert a space r-successes(lepton reconstructions) in 4 trials(hadronic jets) —> r-successes (lepton reconstructions) in 4 trials (hadronic jets)
	>> updated
Page 10

- line 16 the Full Width Half Maximum(FWHM) —> the full width at half maximum (FWHM)
	>>updated 

- 4.4 line 5 SM is not defined. Replace with "standard model" ?
	>> added standard model (SM) definition earlier

Page 12

- line 5 from the bottom: insert a space between 1600 and fb
	>> updated

Page 17

- 4.5 line 11 Do the 6 digits (79.7079 and 10.6972) make sense here ?
	>> yes, measurements are order MeV

page 18

- line 1, 2 (look nicer) $\frac{\Delta L}{L}$ —> $\Delta L/L$
	>> updated

- line 5 (look nicer) $\frac{\Delta \sigma}{\sigma}$ —> $\Delta \sigma/\sigma$
	>> updated
Page 20

- Reference [2] Journal is not given: should be Eur.Phys.J.C45:307-335,2006 # Graham and myself are included in the author list.
	>> fixed bug in latex causing journal to not be shown

- Reference [5] Something funny: [,61(2004)]
	>> removed weird auto generated note


Various changes from my proof read

- introduction choppy and still lacks solid motivation for analysis

	>> reformulated introduction and motivation slightly, tried to better motivate mass measurement and make section flow better

Jenny's comments from first draft

- as a general remark, the document is very sparse on references, especially in the introduction, section 2 and the discussion at the end

	>> added reference to TDR in samples

	>> added references to OPAL for xsec%

	>> added references to lumi error and poll in discussion

	>> added reference to pythia6 --

	>> added reference to OL for TDR

	>> added reference to TaJet in conclusions

- for Fig 5, Sec 3.2 (detector) and Sec 3.3 (software and MC samples) cite IDR. Especially for the MC, explicitly say that you're using samples produced
   for the IDR benchmarking effort.

	>> Changed TDR refrence in figure 5 to IDR, Added IDR reference with comment "The Monte Carlo samples being used are for the Interim Design Report benchmarking effort"


- some parts read rather like a draft for a thesis than like a proceedings or an ILD note, in particular section 2 and 3. I'd recommend to shorten
   them significantly. Also in several cases the (sub)section titles don't match the content, e.g. Sec 2.1 is called W boson but speaks about taus

	>> shortened section 2.1 (physics) and reorganized the content

    >> removed section on cross-section and non-signal like cross-section contribution diagrams

    >> Merged Anatomy of an Event into overall physics section

	>> added reference about cross section % and non resonant qqenu (non signal-like)

	>> removed accelerator description and most of detector (ILD/SID) descriptions

	>> modeled section 3 after ILD-PHYS-PUB-2019-011

	>> added pythia 6 with reference


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

	>> section now begins with actual analysis strategy 



- bullet list on top of page 10 out of context?

	>> bullet list was removed and reformulated in text in section 4


- eq (5) and (6) contain undefined variables

	>> reorganized equation text to come before eqns and explicitly added definition for Nmatch,Nfake,NStotal, NBtotal


- Sec 4.3 "mismeasurements of particles .... Neither of these effects should create a systematic excess...": careful - PFlow confusion can go both ways, so not
    only can cause a loss, but can lead to double counting of neutral hadrons. Maybe reformulate.

	>>reformulated to say "This effect (referring to pf confusion) is not substantial enought to account for the systematic excess observed in reconstruction as shown in Figure 8"

	>> TODO: possibly add a mass distribution, current state makes figure reference out of order


- the strategy to remove overlay via the JADE algorithm and a mass cut-off is very interesting. However the description should be improved.
   Eg it does not become clear why the whole event is clustered into one jet with y_cut = 10^-3. And Q^2 must be an energy SQUARED ?
   (very simple-minded calculation: WW->qqlnu back-to-back, no ISR, no overlay, lepton removed already from PFO list
    => Q= E(had W) = 250 GeV, M(had W)= 80 GeV => y (whole W in one jet) = (80/250)^2 ~= 0.1 >> 0.001 )
   Also plots of the p_Tjet and |costheta_jet| distributions with W-jets and overlay jets shown separately would be nice.

	>> updated according to fast jet user manual, changed reference from jade paper (inconsistent ycut definition)

	>> M^2/Q^2 is now yij = dij/Q^2 where dij=2EiEj(1-costheta) and ycut = dcut/Q^2


- Fig 11: how do you define the "true mass"? The labeling indicates you take the invariant mass of the quarks from the W, i.e. before PS/hadronisation?
    or do you use the TrueJet processor (as you should ;-) ) - or do you run the same JADE algorithm on the generator stable MCParticles, or.... ?

	>> added a description for gen level hadronic mass determination

	>> slightly reformulated caption


- show plots of all final selection variables for S and B (p 16)


- Sec 4.5, stat err on xsection: At least put this in perspective with uncertainties from lumi and pol measurement, citing the appropriate references

	>> added comment about subleading errors due to delta L/L, polarisation contribution, and reference to ILC500 paper
  

- discussion and conclusion: cite studies from Robert, Ivan, Takahiro (JES), mention TaJet as alternative tau finder

	>> added comment about tau clustering alternatives with TaJet and reference



- in general: please use ILD style for all plots (not only logo in corner, but all the rest of the style as well)


- carefully check for inconsistent naming of variables etc, eg p_T vs P_T, m^vis_recoil vs m_\nurecoil, and many others
- I also hate subscript text in mathmode... make it eg E_{\mathrm{vis}} etc, and use $\sin{}$ etc

	>> changed all text subscripts to have \text{} and cos->\cos etc......


- spell checking wouldn't harm ;-)
	>> corrected some spelling (still needs a full check)









