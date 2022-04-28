float posX_=0.88;
float posY_=0.92;
float posX1_=0.2;
float posY1_=0.92;
auto extraText="59.74 fb^{-1}";
auto cmsText="CMS";

auto *latex = new TLatex();
latex->SetNDC();
latex->SetTextAngle(0);
latex->SetTextColor(kBlack);
latex->SetTextSize(0.045);
latex->SetTextFont(42);
latex->SetTextAlign(31);
latex->DrawLatex(posX_, posY_, extraText);

auto *cmslatex = new TLatex();
cmslatex->SetNDC();
cmslatex->SetTextAngle(0);
cmslatex->SetTextColor(kBlack);
cmslatex->SetTextSize(0.045);
cmslatex->SetTextFont(42);
cmslatex->SetTextAlign(31);
cmslatex->DrawLatex(posX1_, posY1_, cmsText);

