#ifndef __WINE_MONIKER_H__
#define __WINE_MONIKER_H__

extern const CLSID CLSID_FileMoniker;
extern const CLSID CLSID_ItemMoniker;
extern const CLSID CLSID_AntiMoniker;
extern const CLSID CLSID_CompositeMoniker;

HRESULT FileMonikerCF_Create(REFIID riid, LPVOID *ppv);
HRESULT ItemMonikerCF_Create(REFIID riid, LPVOID *ppv);
HRESULT AntiMonikerCF_Create(REFIID riid, LPVOID *ppv);
HRESULT CompositeMonikerCF_Create(REFIID riid, LPVOID *ppv);

HRESULT MonikerMarshal_Create(IMoniker *inner, IUnknown **outer);


#endif /* __WINE_MONIKER_H__ */
