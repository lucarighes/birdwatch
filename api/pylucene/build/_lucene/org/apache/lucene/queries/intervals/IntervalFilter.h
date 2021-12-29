#ifndef org_apache_lucene_queries_intervals_IntervalFilter_H
#define org_apache_lucene_queries_intervals_IntervalFilter_H

#include "org/apache/lucene/queries/intervals/IntervalIterator.h"

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
      namespace queries {
        namespace intervals {

          class IntervalFilter : public ::org::apache::lucene::queries::intervals::IntervalIterator {
           public:
            enum {
              mid_init$_269ccceecfbfdd07,
              mid_advance_1e143afe1894d213,
              mid_cost_2e5ae9edcb9b072f,
              mid_docID_9972fcc56b44e79d,
              mid_end_9972fcc56b44e79d,
              mid_gaps_9972fcc56b44e79d,
              mid_matchCost_58aec2b64dff50c8,
              mid_nextDoc_9972fcc56b44e79d,
              mid_nextInterval_9972fcc56b44e79d,
              mid_start_9972fcc56b44e79d,
              mid_accept_8454bd5aa23fd11e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalFilter(jobject obj) : ::org::apache::lucene::queries::intervals::IntervalIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalFilter(const IntervalFilter& obj) : ::org::apache::lucene::queries::intervals::IntervalIterator(obj) {}

            IntervalFilter(const ::org::apache::lucene::queries::intervals::IntervalIterator &);

            jint advance(jint) const;
            jlong cost() const;
            jint docID() const;
            jint end() const;
            jint gaps() const;
            jfloat matchCost() const;
            jint nextDoc() const;
            jint nextInterval() const;
            jint start() const;
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
      namespace queries {
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(IntervalFilter);
          extern PyTypeObject *PY_TYPE(IntervalFilter);

          class t_IntervalFilter {
          public:
            PyObject_HEAD
            IntervalFilter object;
            static PyObject *wrap_Object(const IntervalFilter&);
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
