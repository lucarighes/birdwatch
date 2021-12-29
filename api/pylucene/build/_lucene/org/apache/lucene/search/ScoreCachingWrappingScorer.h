#ifndef org_apache_lucene_search_ScoreCachingWrappingScorer_H
#define org_apache_lucene_search_ScoreCachingWrappingScorer_H

#include "org/apache/lucene/search/Scorable.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable$ChildScorable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ScoreCachingWrappingScorer : public ::org::apache::lucene::search::Scorable {
         public:
          enum {
            mid_init$_57a565cc0113e133,
            mid_docID_9972fcc56b44e79d,
            mid_getChildren_d4dfbf7a26ff41df,
            mid_score_58aec2b64dff50c8,
            mid_setMinCompetitiveScore_8e1d952dd65cdc3a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScoreCachingWrappingScorer(jobject obj) : ::org::apache::lucene::search::Scorable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ScoreCachingWrappingScorer(const ScoreCachingWrappingScorer& obj) : ::org::apache::lucene::search::Scorable(obj) {}

          ScoreCachingWrappingScorer(const ::org::apache::lucene::search::Scorable &);

          jint docID() const;
          ::java::util::Collection getChildren() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(ScoreCachingWrappingScorer);
        extern PyTypeObject *PY_TYPE(ScoreCachingWrappingScorer);

        class t_ScoreCachingWrappingScorer {
        public:
          PyObject_HEAD
          ScoreCachingWrappingScorer object;
          static PyObject *wrap_Object(const ScoreCachingWrappingScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
