#ifndef org_apache_lucene_search_suggest_Lookup$LookupResult_H
#define org_apache_lucene_search_suggest_Lookup$LookupResult_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
    class CharSequence;
  }
  namespace util {
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace search {
        namespace suggest {
          class Lookup$LookupResult;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class Lookup$LookupResult : public ::java::lang::Object {
           public:
            enum {
              mid_init$_098bb2c0a5d3bca3,
              mid_init$_18157332824b3046,
              mid_init$_40577f8bec6feeb5,
              mid_init$_49900d2cf3120d67,
              mid_init$_0d53df5f5b751bca,
              mid_init$_5ac8cc24ba8e1d06,
              mid_compareTo_ccbca25e430ae561,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_contexts,
              fid_highlightKey,
              fid_key,
              fid_payload,
              fid_value,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lookup$LookupResult(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lookup$LookupResult(const Lookup$LookupResult& obj) : ::java::lang::Object(obj) {}

            ::java::util::Set _get_contexts() const;
            ::java::lang::Object _get_highlightKey() const;
            ::java::lang::CharSequence _get_key() const;
            ::org::apache::lucene::util::BytesRef _get_payload() const;
            jlong _get_value() const;

            Lookup$LookupResult(const ::java::lang::CharSequence &, jlong);
            Lookup$LookupResult(const ::java::lang::CharSequence &, jlong, const ::org::apache::lucene::util::BytesRef &);
            Lookup$LookupResult(const ::java::lang::CharSequence &, jlong, const ::java::util::Set &);
            Lookup$LookupResult(const ::java::lang::CharSequence &, const ::java::lang::Object &, jlong, const ::org::apache::lucene::util::BytesRef &);
            Lookup$LookupResult(const ::java::lang::CharSequence &, jlong, const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &);
            Lookup$LookupResult(const ::java::lang::CharSequence &, const ::java::lang::Object &, jlong, const ::org::apache::lucene::util::BytesRef &, const ::java::util::Set &);

            jint compareTo(const Lookup$LookupResult &) const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          extern PyType_Def PY_TYPE_DEF(Lookup$LookupResult);
          extern PyTypeObject *PY_TYPE(Lookup$LookupResult);

          class t_Lookup$LookupResult {
          public:
            PyObject_HEAD
            Lookup$LookupResult object;
            static PyObject *wrap_Object(const Lookup$LookupResult&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
