#ifndef org_apache_lucene_search_grouping_SecondPassGroupingCollector_H
#define org_apache_lucene_search_grouping_SecondPassGroupingCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
    class Object;
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
          class GroupReducer;
        }
        class Scorable;
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

          class SecondPassGroupingCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_7f17b15ce8fed6d7,
              mid_collect_040c4cd0390c5aff,
              mid_getGroupSelector_06bb0f4d4c7a4e8b,
              mid_scoreMode_8a35254b82ee8276,
              mid_setScorer_57a565cc0113e133,
              mid_doSetNextReader_8747e0e89febf88d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SecondPassGroupingCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SecondPassGroupingCollector(const SecondPassGroupingCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            SecondPassGroupingCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::java::util::Collection &, const ::org::apache::lucene::search::grouping::GroupReducer &);

            void collect(jint) const;
            ::org::apache::lucene::search::grouping::GroupSelector getGroupSelector() const;
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
          extern PyType_Def PY_TYPE_DEF(SecondPassGroupingCollector);
          extern PyTypeObject *PY_TYPE(SecondPassGroupingCollector);

          class t_SecondPassGroupingCollector {
          public:
            PyObject_HEAD
            SecondPassGroupingCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SecondPassGroupingCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SecondPassGroupingCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SecondPassGroupingCollector&, PyTypeObject *);
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
