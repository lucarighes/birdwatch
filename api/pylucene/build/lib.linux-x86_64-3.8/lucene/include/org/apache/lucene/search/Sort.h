#ifndef org_apache_lucene_search_Sort_H
#define org_apache_lucene_search_Sort_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortField;
        class IndexSearcher;
        class Sort;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

        class Sort : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_76f0c5651a6ef704,
            mid_init$_ac50e9be1b02abdc,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getSort_b779051c8bd9ece1,
            mid_hashCode_9972fcc56b44e79d,
            mid_needsScores_8454bd5aa23fd11e,
            mid_rewrite_d9e3fdde5059b95c,
            mid_setSort_76f0c5651a6ef704,
            mid_setSort_ac50e9be1b02abdc,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Sort(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Sort(const Sort& obj) : ::java::lang::Object(obj) {}

          static Sort *INDEXORDER;
          static Sort *RELEVANCE;

          Sort();
          Sort(const JArray< ::org::apache::lucene::search::SortField > &);
          Sort(const ::org::apache::lucene::search::SortField &);

          jboolean equals(const ::java::lang::Object &) const;
          JArray< ::org::apache::lucene::search::SortField > getSort() const;
          jint hashCode() const;
          jboolean needsScores() const;
          Sort rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          void setSort(const JArray< ::org::apache::lucene::search::SortField > &) const;
          void setSort(const ::org::apache::lucene::search::SortField &) const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(Sort);
        extern PyTypeObject *PY_TYPE(Sort);

        class t_Sort {
        public:
          PyObject_HEAD
          Sort object;
          static PyObject *wrap_Object(const Sort&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
