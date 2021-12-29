#ifndef org_apache_lucene_search_grouping_FirstPassGroupingCollector_H
#define org_apache_lucene_search_grouping_FirstPassGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

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
        namespace grouping {
          class GroupSelector;
          class SearchGroup;
        }
        class Scorable;
        class Sort;
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

          class FirstPassGroupingCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_542fa4aa72157f4e,
              mid_collect_040c4cd0390c5aff,
              mid_getGroupSelector_06bb0f4d4c7a4e8b,
              mid_getTopGroups_d2d6ba66bd7a489e,
              mid_scoreMode_8a35254b82ee8276,
              mid_setScorer_57a565cc0113e133,
              mid_doSetNextReader_8747e0e89febf88d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FirstPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FirstPassGroupingCollector(const FirstPassGroupingCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            FirstPassGroupingCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::org::apache::lucene::search::Sort &, jint);

            void collect(jint) const;
            ::org::apache::lucene::search::grouping::GroupSelector getGroupSelector() const;
            ::java::util::Collection getTopGroups(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(FirstPassGroupingCollector);
          extern PyTypeObject *PY_TYPE(FirstPassGroupingCollector);

          class t_FirstPassGroupingCollector {
          public:
            PyObject_HEAD
            FirstPassGroupingCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FirstPassGroupingCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FirstPassGroupingCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FirstPassGroupingCollector&, PyTypeObject *);
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
