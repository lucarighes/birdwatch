#ifndef org_apache_lucene_search_spans_SpanFirstQuery_H
#define org_apache_lucene_search_spans_SpanFirstQuery_H

#include "org/apache/lucene/search/spans/SpanPositionRangeQuery.h"

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
        namespace spans {
          class SpanQuery;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spans {

          class SpanFirstQuery : public ::org::apache::lucene::search::spans::SpanPositionRangeQuery {
           public:
            enum {
              mid_init$_2435e8f872de61fa,
              mid_toString_9bfa75c9f141b67f,
              mid_acceptPosition_ab707424c19ac906,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanFirstQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanPositionRangeQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanFirstQuery(const SpanFirstQuery& obj) : ::org::apache::lucene::search::spans::SpanPositionRangeQuery(obj) {}

            SpanFirstQuery(const ::org::apache::lucene::search::spans::SpanQuery &, jint);

            ::java::lang::String toString(const ::java::lang::String &) const;
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
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(SpanFirstQuery);
          extern PyTypeObject *PY_TYPE(SpanFirstQuery);

          class t_SpanFirstQuery {
          public:
            PyObject_HEAD
            SpanFirstQuery object;
            static PyObject *wrap_Object(const SpanFirstQuery&);
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
