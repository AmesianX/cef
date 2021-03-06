// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=2f79804767b1c08a00f87b918190f33a1734b346$
//

#include "libcef_dll/cpptoc/scheme_registrar_cpptoc.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
scheme_registrar_add_custom_scheme(struct _cef_scheme_registrar_t* self,
                                   const cef_string_t* scheme_name,
                                   int is_standard,
                                   int is_local,
                                   int is_display_isolated,
                                   int is_secure,
                                   int is_cors_enabled,
                                   int is_csp_bypassing,
                                   int is_fetch_enabled) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: scheme_name; type: string_byref_const
  DCHECK(scheme_name);
  if (!scheme_name)
    return 0;

  // Execute
  bool _retval = CefSchemeRegistrarCppToC::Get(self)->AddCustomScheme(
      CefString(scheme_name), is_standard ? true : false,
      is_local ? true : false, is_display_isolated ? true : false,
      is_secure ? true : false, is_cors_enabled ? true : false,
      is_csp_bypassing ? true : false, is_fetch_enabled ? true : false);

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefSchemeRegistrarCppToC::CefSchemeRegistrarCppToC() {
  GetStruct()->add_custom_scheme = scheme_registrar_add_custom_scheme;
}

template <>
CefOwnPtr<CefSchemeRegistrar> CefCppToCScoped<
    CefSchemeRegistrarCppToC,
    CefSchemeRegistrar,
    cef_scheme_registrar_t>::UnwrapDerivedOwn(CefWrapperType type,
                                              cef_scheme_registrar_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return CefOwnPtr<CefSchemeRegistrar>();
}

template <>
CefRawPtr<CefSchemeRegistrar> CefCppToCScoped<
    CefSchemeRegistrarCppToC,
    CefSchemeRegistrar,
    cef_scheme_registrar_t>::UnwrapDerivedRaw(CefWrapperType type,
                                              cef_scheme_registrar_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCScoped<CefSchemeRegistrarCppToC,
                                     CefSchemeRegistrar,
                                     cef_scheme_registrar_t>::DebugObjCt
    ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCppToCScoped<CefSchemeRegistrarCppToC,
                               CefSchemeRegistrar,
                               cef_scheme_registrar_t>::kWrapperType =
    WT_SCHEME_REGISTRAR;
