#ifndef org_apache_lucene_search_grouping_GroupFacetCollector_H
#define org_apache_lucene_search_grouping_GroupFacetCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace java {
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
        class Scorable;
        namespace grouping {
          class GroupFacetCollector$GroupedFacetResult;
        }
        class ScoreMode;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupFacetCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_mergeSegmentResults_180ae65d6c996119,
              mid_scoreMode_8a35254b82ee8276,
              mid_setScorer_57a565cc0113e133,
              mid_createSegmentResult_9f86444865654d4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupFacetCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupFacetCollector(const GroupFacetCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            ::org::apache::lucene::search::grouping::GroupFacetCollector$GroupedFacetResult mergeSegmentResults(jint, jint, jboolean) const;
            ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(GroupFacetCollector);
          extern PyTypeObject *PY_TYPE(GroupFacetCollector);

          class t_GroupFacetCollector {
          public:
            PyObject_HEAD
            GroupFacetCollector object;
            static PyObject *wrap_Object(const GroupFacetCollector&);
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
