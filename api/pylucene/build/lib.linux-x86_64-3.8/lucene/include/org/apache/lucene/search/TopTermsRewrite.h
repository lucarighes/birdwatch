#ifndef org_apache_lucene_search_TopTermsRewrite_H
#define org_apache_lucene_search_TopTermsRewrite_H

#include "org/apache/lucene/search/TermCollectingRewrite.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class Query;
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

        class TopTermsRewrite : public ::org::apache::lucene::search::TermCollectingRewrite {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getSize_9972fcc56b44e79d,
            mid_hashCode_9972fcc56b44e79d,
            mid_rewrite_9b63ebac49a26b30,
            mid_getMaxSize_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopTermsRewrite(jobject obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopTermsRewrite(const TopTermsRewrite& obj) : ::org::apache::lucene::search::TermCollectingRewrite(obj) {}

          TopTermsRewrite(jint);

          jboolean equals(const ::java::lang::Object &) const;
          jint getSize() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::MultiTermQuery &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TopTermsRewrite);
        extern PyTypeObject *PY_TYPE(TopTermsRewrite);

        class t_TopTermsRewrite {
        public:
          PyObject_HEAD
          TopTermsRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopTermsRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopTermsRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopTermsRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
