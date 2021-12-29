#ifndef org_apache_lucene_facet_FacetResult_H
#define org_apache_lucene_facet_FacetResult_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class LabelAndValue;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetResult : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3989d0f2a313dd34,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_childCount,
            fid_dim,
            fid_labelValues,
            fid_path,
            fid_value,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetResult(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetResult(const FacetResult& obj) : ::java::lang::Object(obj) {}

          jint _get_childCount() const;
          ::java::lang::String _get_dim() const;
          JArray< ::org::apache::lucene::facet::LabelAndValue > _get_labelValues() const;
          JArray< ::java::lang::String > _get_path() const;
          ::java::lang::Number _get_value() const;

          FacetResult(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::java::lang::Number &, const JArray< ::org::apache::lucene::facet::LabelAndValue > &, jint);

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
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetResult);
        extern PyTypeObject *PY_TYPE(FacetResult);

        class t_FacetResult {
        public:
          PyObject_HEAD
          FacetResult object;
          static PyObject *wrap_Object(const FacetResult&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
