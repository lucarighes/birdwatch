#ifndef org_apache_lucene_search_IndriDisjunctionScorer_H
#define org_apache_lucene_search_IndriDisjunctionScorer_H

#include "org/apache/lucene/search/IndriScorer.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndriDisjunctionScorer : public ::org::apache::lucene::search::IndriScorer {
         public:
          enum {
            mid_docID_9972fcc56b44e79d,
            mid_getMaxScore_384f078ef4b8f931,
            mid_getSubMatches_49ec78390f08338a,
            mid_iterator_173d81d7b8f93882,
            mid_score_58aec2b64dff50c8,
            mid_smoothingScore_384f078ef4b8f931,
            mid_smoothingScore_5c128e5051334904,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriDisjunctionScorer(jobject obj) : ::org::apache::lucene::search::IndriScorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriDisjunctionScorer(const IndriDisjunctionScorer& obj) : ::org::apache::lucene::search::IndriScorer(obj) {}

          jint docID() const;
          jfloat getMaxScore(jint) const;
          ::java::util::List getSubMatches() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jfloat score() const;
          jfloat smoothingScore(jint) const;
          jfloat smoothingScore(const ::java::util::List &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IndriDisjunctionScorer);
        extern PyTypeObject *PY_TYPE(IndriDisjunctionScorer);

        class t_IndriDisjunctionScorer {
        public:
          PyObject_HEAD
          IndriDisjunctionScorer object;
          static PyObject *wrap_Object(const IndriDisjunctionScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
