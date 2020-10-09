
Jenny's comments from first draft

- as a general remark, the document is very sparse on references, especially in the introduction, section 2 and the discussion at the end


- for Fig 5, Sec 3.2 (detector) and Sec 3.3 (software and MC samples) cite IDR. Especially for the MC, explicitly say that you're using samples produced
   for the IDR benchmarking effort.


- some parts read rather like a draft for a thesis than like a proceedings or an ILD note, in particular section 2 and 3. I'd recommend to shorten
   them significantly. Also in several cases the (sub)section titles don't match the content, e.g. Sec 2.1 is called W boson but speaks about taus


- in some places numbers are missing. E.g. in Sec 2.2 - beam effects the decisive number of <N>=1.05 overlay events/BX is never mentioned.
   in combination with using the LHC term of pile-up, this gives the impression like we were talking tens or hundreds of overlay events


- the Feynman diagrams in Figs 1, 2, 3 look very different in style -> unify?


- in Sec 4.1, there are too many details given on the polarisation weighting ("thesis-style"). The actual "Analysis Overview" promised by the title
   is missing, though - I'd expected here an explanation of the general strategy (generic lepton ID for e,mu,tau, followed by overlay removal, event selection,
   fitting of W mass peak).


- bullet list on top of page 10 out of context?


- eq (5) and (6) contain undefined variables


- Sec 4.3 "mismeasurements of particles .... Neither of these effects should create a systematic excess...": careful - PFlow confusion can go both ways, so not
    only can cause a loss, but can lead to double counting of neutral hadrons. Maybe reformulate.


- the strategy to remove overlay via the JADE algorithm and a mass cut-off is very interesting. However the description should be improved.
   Eg it does not become clear why the whole event is clustered into one jet with y_cut = 10^-3. And Q^2 must be an energy SQUARED ?
   (very simple-minded calculation: WW->qqlnu back-to-back, no ISR, no overlay, lepton removed already from PFO list
    => Q= E(had W) = 250 GeV, M(had W)= 80 GeV => y (whole W in one jet) = (80/250)^2 ~= 0.1 >> 0.001 )
   Also plots of the p_Tjet and |costheta_jet| distributions with W-jets and overlay jets shown separately would be nice.


- Fig 11: how do you define the "true mass"? The labeling indicates you take the invariant mass of the quarks from the W, i.e. before PS/hadronisation?
    or do you use the TrueJet processor (as you should ;-) ) - or do you run the same JADE algorithm on the generator stable MCParticles, or.... ?


- show plots of all final selection variables for S and B (p 16)


- Sec 4.5, stat err on xsection: At least put this in perspective with uncertainties from lumi and pol measurement, citing the appropriate references


- discussion and conclusion: cite studies from Robert, Ivan, Takahiro (JES), mention TaJet as alternative tau finder


- in general: please use ILD style for all plots (not only logo in corner, but all the rest of the style as well)


- carefully check for inconsistent naming of variables etc, eg p_T vs P_T, m^vis_recoil vs m_\nurecoil, and many others


- I also hate subscript text in mathmode... make it eg E_{\mathrm{vis}} etc, and use $\sin{}$ etc


- spell checking wouldn't harm ;-)
