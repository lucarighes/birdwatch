#ifndef org_apache_lucene_facet_taxonomy_FacetLabel_H
#define org_apache_lucene_facet_taxonomy_FacetLabel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class FacetLabel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_2fc318b999a7aba3,
              mid_init$_e15507bf45c25446,
              mid_compareTo_1e6795f28098d13d,
              mid_equals_8b72f2dcdde6fd1d,
              mid_hashCode_9972fcc56b44e79d,
              mid_longHashCode_2e5ae9edcb9b072f,
              mid_subpath_2f8d8c81610d6b29,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_components,
              fid_length,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FacetLabel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FacetLabel(const FacetLabel& obj) : ::java::lang::Object(obj) {}

            static jint MAX_CATEGORY_PATH_LENGTH;

            JArray< ::java::lang::String > _get_components() const;
            jint _get_length() const;

            FacetLabel(const JArray< ::java::lang::String > &);
            FacetLabel(const ::java::lang::String &, const JArray< ::java::lang::String > &);

            jint compareTo(const FacetLabel &) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jlong longHashCode() const;
            FacetLabel subpath(jint) const;
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
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(FacetLabel);
          extern PyTypeObject *PY_TYPE(FacetLabel);

          class t_FacetLabel {
          public:
            PyObject_HEAD
            FacetLabel object;
            static PyObject *wrap_Object(const FacetLabel&);
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
