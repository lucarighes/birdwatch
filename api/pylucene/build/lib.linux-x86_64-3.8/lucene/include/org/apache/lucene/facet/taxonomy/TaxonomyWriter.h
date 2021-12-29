#ifndef org_apache_lucene_facet_taxonomy_TaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_TaxonomyWriter_H

#include "java/io/Closeable.h"

namespace java {
  namespace util {
    class Map$Entry;
  }
  namespace lang {
    class Class;
    class Iterable;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TwoPhaseCommit;
      }
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

          class TaxonomyWriter : public ::java::io::Closeable {
           public:
            enum {
              mid_addCategory_1e6795f28098d13d,
              mid_getLiveCommitData_7a21c115c1b038aa,
              mid_getParent_1e143afe1894d213,
              mid_getSize_9972fcc56b44e79d,
              mid_setLiveCommitData_870d7079aa6e0153,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyWriter(jobject obj) : ::java::io::Closeable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyWriter(const TaxonomyWriter& obj) : ::java::io::Closeable(obj) {}

            jint addCategory(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
            ::java::lang::Iterable getLiveCommitData() const;
            jint getParent(jint) const;
            jint getSize() const;
            void setLiveCommitData(const ::java::lang::Iterable &) const;
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyWriter);
          extern PyTypeObject *PY_TYPE(TaxonomyWriter);

          class t_TaxonomyWriter {
          public:
            PyObject_HEAD
            TaxonomyWriter object;
            static PyObject *wrap_Object(const TaxonomyWriter&);
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
