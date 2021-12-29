#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$OrdinalMap_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter$OrdinalMap_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
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
          namespace directory {

            class DirectoryTaxonomyWriter$OrdinalMap : public ::java::lang::Object {
             public:
              enum {
                mid_addDone_f2cc1bce94666404,
                mid_addMapping_438c62480c481c65,
                mid_getMap_d2c45ef07a322466,
                mid_setSize_040c4cd0390c5aff,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyWriter$OrdinalMap(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyWriter$OrdinalMap(const DirectoryTaxonomyWriter$OrdinalMap& obj) : ::java::lang::Object(obj) {}

              void addDone() const;
              void addMapping(jint, jint) const;
              JArray< jint > getMap() const;
              void setSize(jint) const;
            };
          }
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
          namespace directory {
            extern PyType_Def PY_TYPE_DEF(DirectoryTaxonomyWriter$OrdinalMap);
            extern PyTypeObject *PY_TYPE(DirectoryTaxonomyWriter$OrdinalMap);

            class t_DirectoryTaxonomyWriter$OrdinalMap {
            public:
              PyObject_HEAD
              DirectoryTaxonomyWriter$OrdinalMap object;
              static PyObject *wrap_Object(const DirectoryTaxonomyWriter$OrdinalMap&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
