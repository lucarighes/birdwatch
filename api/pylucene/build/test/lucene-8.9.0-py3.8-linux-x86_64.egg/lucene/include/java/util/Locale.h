#ifndef java_util_Locale_H
#define java_util_Locale_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Locale$LanguageRange;
    class MissingResourceException;
    class Locale$Category;
    class Locale$FilteringMode;
    class Locale;
    class Set;
    class List;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class Character;
    class String;
  }
  namespace io {
    class Serializable;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Locale : public ::java::lang::Object {
     public:
      enum {
        mid_init$_9fd2eb66a64e6f0f,
        mid_init$_15b72f6a44ff93f2,
        mid_init$_f05031826564616f,
        mid_clone_d6bcd06f3102c4d9,
        mid_equals_8b72f2dcdde6fd1d,
        mid_filter_329fdf8ab4752674,
        mid_filter_076912a206f80f12,
        mid_filterTags_329fdf8ab4752674,
        mid_filterTags_076912a206f80f12,
        mid_forLanguageTag_08922c4718a69f3b,
        mid_getAvailableLocales_9de0c9f607235a40,
        mid_getCountry_db9b55ba01e03e4b,
        mid_getDefault_bd9770023d5e622d,
        mid_getDefault_bedcaca914099631,
        mid_getDisplayCountry_db9b55ba01e03e4b,
        mid_getDisplayCountry_8cbdae2bb55ad99c,
        mid_getDisplayLanguage_db9b55ba01e03e4b,
        mid_getDisplayLanguage_8cbdae2bb55ad99c,
        mid_getDisplayName_db9b55ba01e03e4b,
        mid_getDisplayName_8cbdae2bb55ad99c,
        mid_getDisplayScript_db9b55ba01e03e4b,
        mid_getDisplayScript_8cbdae2bb55ad99c,
        mid_getDisplayVariant_db9b55ba01e03e4b,
        mid_getDisplayVariant_8cbdae2bb55ad99c,
        mid_getExtension_4bb5e6191c541c0d,
        mid_getExtensionKeys_7dcf4034c6d1a92a,
        mid_getISO3Country_db9b55ba01e03e4b,
        mid_getISO3Language_db9b55ba01e03e4b,
        mid_getISOCountries_9865da0b5ee490bc,
        mid_getISOLanguages_9865da0b5ee490bc,
        mid_getLanguage_db9b55ba01e03e4b,
        mid_getScript_db9b55ba01e03e4b,
        mid_getUnicodeLocaleAttributes_7dcf4034c6d1a92a,
        mid_getUnicodeLocaleKeys_7dcf4034c6d1a92a,
        mid_getUnicodeLocaleType_9bfa75c9f141b67f,
        mid_getVariant_db9b55ba01e03e4b,
        mid_hasExtensions_8454bd5aa23fd11e,
        mid_hashCode_9972fcc56b44e79d,
        mid_lookup_bf3cd24731d50409,
        mid_lookupTag_8bb89dcc440c4b6b,
        mid_setDefault_8b005052a37adc8a,
        mid_setDefault_52bb86de8933b4e4,
        mid_stripExtensions_bd9770023d5e622d,
        mid_toLanguageTag_db9b55ba01e03e4b,
        mid_toString_db9b55ba01e03e4b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Locale(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Locale(const Locale& obj) : ::java::lang::Object(obj) {}

      static Locale *CANADA;
      static Locale *CANADA_FRENCH;
      static Locale *CHINA;
      static Locale *CHINESE;
      static Locale *ENGLISH;
      static Locale *FRANCE;
      static Locale *FRENCH;
      static Locale *GERMAN;
      static Locale *GERMANY;
      static Locale *ITALIAN;
      static Locale *ITALY;
      static Locale *JAPAN;
      static Locale *JAPANESE;
      static Locale *KOREA;
      static Locale *KOREAN;
      static Locale *PRC;
      static jchar PRIVATE_USE_EXTENSION;
      static Locale *ROOT;
      static Locale *SIMPLIFIED_CHINESE;
      static Locale *TAIWAN;
      static Locale *TRADITIONAL_CHINESE;
      static Locale *UK;
      static jchar UNICODE_LOCALE_EXTENSION;
      static Locale *US;

      Locale(const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &);
      Locale(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      static ::java::util::List filter(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::util::List filter(const ::java::util::List &, const ::java::util::Collection &, const ::java::util::Locale$FilteringMode &);
      static ::java::util::List filterTags(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::util::List filterTags(const ::java::util::List &, const ::java::util::Collection &, const ::java::util::Locale$FilteringMode &);
      static Locale forLanguageTag(const ::java::lang::String &);
      static JArray< Locale > getAvailableLocales();
      ::java::lang::String getCountry() const;
      static Locale getDefault();
      static Locale getDefault(const ::java::util::Locale$Category &);
      ::java::lang::String getDisplayCountry() const;
      ::java::lang::String getDisplayCountry(const Locale &) const;
      ::java::lang::String getDisplayLanguage() const;
      ::java::lang::String getDisplayLanguage(const Locale &) const;
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const Locale &) const;
      ::java::lang::String getDisplayScript() const;
      ::java::lang::String getDisplayScript(const Locale &) const;
      ::java::lang::String getDisplayVariant() const;
      ::java::lang::String getDisplayVariant(const Locale &) const;
      ::java::lang::String getExtension(jchar) const;
      ::java::util::Set getExtensionKeys() const;
      ::java::lang::String getISO3Country() const;
      ::java::lang::String getISO3Language() const;
      static JArray< ::java::lang::String > getISOCountries();
      static JArray< ::java::lang::String > getISOLanguages();
      ::java::lang::String getLanguage() const;
      ::java::lang::String getScript() const;
      ::java::util::Set getUnicodeLocaleAttributes() const;
      ::java::util::Set getUnicodeLocaleKeys() const;
      ::java::lang::String getUnicodeLocaleType(const ::java::lang::String &) const;
      ::java::lang::String getVariant() const;
      jboolean hasExtensions() const;
      jint hashCode() const;
      static Locale lookup(const ::java::util::List &, const ::java::util::Collection &);
      static ::java::lang::String lookupTag(const ::java::util::List &, const ::java::util::Collection &);
      static void setDefault(const Locale &);
      static void setDefault(const ::java::util::Locale$Category &, const Locale &);
      Locale stripExtensions() const;
      ::java::lang::String toLanguageTag() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Locale);
    extern PyTypeObject *PY_TYPE(Locale);

    class t_Locale {
    public:
      PyObject_HEAD
      Locale object;
      static PyObject *wrap_Object(const Locale&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
