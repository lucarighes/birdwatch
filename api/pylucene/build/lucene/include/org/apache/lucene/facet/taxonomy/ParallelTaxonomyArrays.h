#ifndef org_apache_lucene_facet_taxonomy_ParallelTaxonomyArrays_H
#define org_apache_lucene_facet_taxonomy_ParallelTaxonomyArrays_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class ParallelTaxonomyArrays : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_children_d2c45ef07a322466,
              mid_parents_d2c45ef07a322466,
              mid_siblings_d2c45ef07a322466,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ParallelTaxonomyArrays(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ParallelTaxonomyArrays(const ParallelTaxonomyArrays& obj) : ::java::lang::Object(obj) {}

            ParallelTaxonomyArrays();

            JArray< jint > children() const;
            JArray< jint > parents() const;
            JArray< jint > siblings() const;
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
          extern PyType_Def PY_TYPE_DEF(ParallelTaxonomyArrays);
          extern PyTypeObject *PY_TYPE(ParallelTaxonomyArrays);

          class t_ParallelTaxonomyArrays {
          public:
            PyObject_HEAD
            ParallelTaxonomyArrays object;
            static PyObject *wrap_Object(const ParallelTaxonomyArrays&);
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
