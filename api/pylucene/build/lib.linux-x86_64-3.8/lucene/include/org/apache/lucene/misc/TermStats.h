#ifndef org_apache_lucene_misc_TermStats_H
#define org_apache_lucene_misc_TermStats_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {

        class TermStats : public ::java::lang::Object {
         public:
          enum {
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_docFreq,
            fid_field,
            fid_termtext,
            fid_totalTermFreq,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermStats(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermStats(const TermStats& obj) : ::java::lang::Object(obj) {}

          jint _get_docFreq() const;
          void _set_docFreq(jint) const;
          ::java::lang::String _get_field() const;
          void _set_field(const ::java::lang::String &) const;
          ::org::apache::lucene::util::BytesRef _get_termtext() const;
          void _set_termtext(const ::org::apache::lucene::util::BytesRef &) const;
          jlong _get_totalTermFreq() const;
          void _set_totalTermFreq(jlong) const;

          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        extern PyType_Def PY_TYPE_DEF(TermStats);
        extern PyTypeObject *PY_TYPE(TermStats);

        class t_TermStats {
        public:
          PyObject_HEAD
          TermStats object;
          static PyObject *wrap_Object(const TermStats&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
