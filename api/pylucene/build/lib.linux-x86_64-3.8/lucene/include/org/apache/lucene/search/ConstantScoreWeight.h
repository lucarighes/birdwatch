#ifndef org_apache_lucene_search_ConstantScoreWeight_H
#define org_apache_lucene_search_ConstantScoreWeight_H

#include "org/apache/lucene/search/Weight.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
        class Term;
      }
      namespace search {
        class Explanation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Set;
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

        class ConstantScoreWeight : public ::org::apache::lucene::search::Weight {
         public:
          enum {
            mid_explain_4cf8bab0b7954f4a,
            mid_extractTerms_d5a4a8d4b806f0ba,
            mid_score_58aec2b64dff50c8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConstantScoreWeight(jobject obj) : ::org::apache::lucene::search::Weight(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConstantScoreWeight(const ConstantScoreWeight& obj) : ::org::apache::lucene::search::Weight(obj) {}

          ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::index::LeafReaderContext &, jint) const;
          void extractTerms(const ::java::util::Set &) const;
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
        extern PyType_Def PY_TYPE_DEF(ConstantScoreWeight);
        extern PyTypeObject *PY_TYPE(ConstantScoreWeight);

        class t_ConstantScoreWeight {
        public:
          PyObject_HEAD
          ConstantScoreWeight object;
          static PyObject *wrap_Object(const ConstantScoreWeight&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
