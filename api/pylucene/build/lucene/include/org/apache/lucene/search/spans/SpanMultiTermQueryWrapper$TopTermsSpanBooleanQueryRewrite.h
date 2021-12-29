#ifndef org_apache_lucene_search_spans_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite_H
#define org_apache_lucene_search_spans_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite_H

#include "org/apache/lucene/search/spans/SpanMultiTermQueryWrapper$SpanRewriteMethod.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace spans {
          class SpanQuery;
        }
        class MultiTermQuery;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
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
        namespace spans {

          class SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite : public ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod {
           public:
            enum {
              mid_init$_040c4cd0390c5aff,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getSize_9972fcc56b44e79d,
              mid_hashCode_9972fcc56b44e79d,
              mid_rewrite_5b5095bdee2c3fbe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite(jobject obj) : ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite(const SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite& obj) : ::org::apache::lucene::search::spans::SpanMultiTermQueryWrapper$SpanRewriteMethod(obj) {}

            SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite(jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint getSize() const;
            jint hashCode() const;
            ::org::apache::lucene::search::spans::SpanQuery rewrite(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::MultiTermQuery &) const;
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
          extern PyType_Def PY_TYPE_DEF(SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite);
          extern PyTypeObject *PY_TYPE(SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite);

          class t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite {
          public:
            PyObject_HEAD
            SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SpanMultiTermQueryWrapper$TopTermsSpanBooleanQueryRewrite&, PyTypeObject *);
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
