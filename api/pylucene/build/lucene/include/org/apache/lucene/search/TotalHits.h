#ifndef org_apache_lucene_search_TotalHits_H
#define org_apache_lucene_search_TotalHits_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TotalHits$Relation;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TotalHits : public ::java::lang::Object {
         public:
          enum {
            mid_init$_aa53f41817784edd,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_relation,
            fid_value,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TotalHits(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TotalHits(const TotalHits& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::TotalHits$Relation _get_relation() const;
          jlong _get_value() const;

          TotalHits(jlong, const ::org::apache::lucene::search::TotalHits$Relation &);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TotalHits);
        extern PyTypeObject *PY_TYPE(TotalHits);

        class t_TotalHits {
        public:
          PyObject_HEAD
          TotalHits object;
          static PyObject *wrap_Object(const TotalHits&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
