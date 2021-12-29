#ifndef org_apache_lucene_search_comparators_NumericComparator$NumericLeafComparator_H
#define org_apache_lucene_search_comparators_NumericComparator$NumericLeafComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        namespace comparators {
          class NumericComparator;
        }
        class LeafFieldComparator;
        class Scorable;
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {

          class NumericComparator$NumericLeafComparator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7d2e0454df1c323,
              mid_competitiveIterator_173d81d7b8f93882,
              mid_copy_438c62480c481c65,
              mid_setBottom_040c4cd0390c5aff,
              mid_setHitsThresholdReached_f2cc1bce94666404,
              mid_setScorer_57a565cc0113e133,
              mid_getNumericDocValues_efa05bfa9b424876,
              mid_encodeTop_9ffdf271836656c4,
              mid_encodeBottom_9ffdf271836656c4,
              mid_isMissingValueCompetitive_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NumericComparator$NumericLeafComparator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NumericComparator$NumericLeafComparator(const NumericComparator$NumericLeafComparator& obj) : ::java::lang::Object(obj) {}

            NumericComparator$NumericLeafComparator(const ::org::apache::lucene::search::comparators::NumericComparator &, const ::org::apache::lucene::index::LeafReaderContext &);

            ::org::apache::lucene::search::DocIdSetIterator competitiveIterator() const;
            void copy(jint, jint) const;
            void setBottom(jint) const;
            void setHitsThresholdReached() const;
            void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
        namespace comparators {
          extern PyType_Def PY_TYPE_DEF(NumericComparator$NumericLeafComparator);
          extern PyTypeObject *PY_TYPE(NumericComparator$NumericLeafComparator);

          class t_NumericComparator$NumericLeafComparator {
          public:
            PyObject_HEAD
            NumericComparator$NumericLeafComparator object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NumericComparator$NumericLeafComparator *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NumericComparator$NumericLeafComparator&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NumericComparator$NumericLeafComparator&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
