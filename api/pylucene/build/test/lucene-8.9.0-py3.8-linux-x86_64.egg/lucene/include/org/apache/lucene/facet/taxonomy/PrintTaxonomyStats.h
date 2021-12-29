#ifndef org_apache_lucene_facet_taxonomy_PrintTaxonomyStats_H
#define org_apache_lucene_facet_taxonomy_PrintTaxonomyStats_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class PrintStream;
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class TaxonomyReader;
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

          class PrintTaxonomyStats : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_main_2fc318b999a7aba3,
              mid_printStats_b26b53d74effc7c6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PrintTaxonomyStats(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PrintTaxonomyStats(const PrintTaxonomyStats& obj) : ::java::lang::Object(obj) {}

            PrintTaxonomyStats();

            static void main(const JArray< ::java::lang::String > &);
            static void printStats(const ::org::apache::lucene::facet::taxonomy::TaxonomyReader &, const ::java::io::PrintStream &, jboolean);
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
          extern PyType_Def PY_TYPE_DEF(PrintTaxonomyStats);
          extern PyTypeObject *PY_TYPE(PrintTaxonomyStats);

          class t_PrintTaxonomyStats {
          public:
            PyObject_HEAD
            PrintTaxonomyStats object;
            static PyObject *wrap_Object(const PrintTaxonomyStats&);
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
