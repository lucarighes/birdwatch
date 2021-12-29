#ifndef org_apache_lucene_facet_taxonomy_writercache_LabelToOrdinal_H
#define org_apache_lucene_facet_taxonomy_writercache_LabelToOrdinal_H

#include "java/lang/Object.h"

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
          namespace writercache {

            class LabelToOrdinal : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f2cc1bce94666404,
                mid_addLabel_f12d98a9d2a6ce17,
                mid_getMaxOrdinal_9972fcc56b44e79d,
                mid_getNextOrdinal_9972fcc56b44e79d,
                mid_getOrdinal_1e6795f28098d13d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit LabelToOrdinal(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              LabelToOrdinal(const LabelToOrdinal& obj) : ::java::lang::Object(obj) {}

              static jint INVALID_ORDINAL;

              LabelToOrdinal();

              void addLabel(const ::org::apache::lucene::facet::taxonomy::FacetLabel &, jint) const;
              jint getMaxOrdinal() const;
              jint getNextOrdinal() const;
              jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
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
          namespace writercache {
            extern PyType_Def PY_TYPE_DEF(LabelToOrdinal);
            extern PyTypeObject *PY_TYPE(LabelToOrdinal);

            class t_LabelToOrdinal {
            public:
              PyObject_HEAD
              LabelToOrdinal object;
              static PyObject *wrap_Object(const LabelToOrdinal&);
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
