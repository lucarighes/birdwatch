#ifndef org_apache_lucene_search_spans_SpanPositionRangeQuery_H
#define org_apache_lucene_search_spans_SpanPositionRangeQuery_H

#include "org/apache/lucene/search/spans/SpanPositionCheckQuery.h"

namespace java {
  namespace lang {
    class Object;
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

          class SpanPositionRangeQuery : public ::org::apache::lucene::search::spans::SpanPositionCheckQuery {
           public:
            enum {
              mid_init$_788b62ab1679c237,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getEnd_9972fcc56b44e79d,
              mid_getStart_9972fcc56b44e79d,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_9bfa75c9f141b67f,
              mid_acceptPosition_ab707424c19ac906,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanPositionRangeQuery(jobject obj) : ::org::apache::lucene::search::spans::SpanPositionCheckQuery(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanPositionRangeQuery(const SpanPositionRangeQuery& obj) : ::org::apache::lucene::search::spans::SpanPositionCheckQuery(obj) {}

            SpanPositionRangeQuery(const ::org::apache::lucene::search::spans::SpanQuery &, jint, jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint getEnd() const;
            jint getStart() const;
            jint hashCode() const;
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
          extern PyType_Def PY_TYPE_DEF(SpanPositionRangeQuery);
          extern PyTypeObject *PY_TYPE(SpanPositionRangeQuery);

          class t_SpanPositionRangeQuery {
          public:
            PyObject_HEAD
            SpanPositionRangeQuery object;
            static PyObject *wrap_Object(const SpanPositionRangeQuery&);
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
