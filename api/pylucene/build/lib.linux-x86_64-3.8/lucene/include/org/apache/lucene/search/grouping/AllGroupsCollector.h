#ifndef org_apache_lucene_search_grouping_AllGroupsCollector_H
#define org_apache_lucene_search_grouping_AllGroupsCollector_H

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

          class AllGroupsCollector : public ::org::apache::lucene::search::SimpleCollector {
           public:
            enum {
              mid_init$_acfcf289281f56c3,
              mid_collect_040c4cd0390c5aff,
              mid_getGroupCount_9972fcc56b44e79d,
              mid_getGroups_d4dfbf7a26ff41df,
              mid_scoreMode_8a35254b82ee8276,
              mid_setScorer_57a565cc0113e133,
              mid_doSetNextReader_8747e0e89febf88d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AllGroupsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AllGroupsCollector(const AllGroupsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

            AllGroupsCollector(const ::org::apache::lucene::search::grouping::GroupSelector &);

            void collect(jint) const;
            jint getGroupCount() const;
            ::java::util::Collection getGroups() const;
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
          extern PyType_Def PY_TYPE_DEF(AllGroupsCollector);
          extern PyTypeObject *PY_TYPE(AllGroupsCollector);

          class t_AllGroupsCollector {
          public:
            PyObject_HEAD
            AllGroupsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AllGroupsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AllGroupsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AllGroupsCollector&, PyTypeObject *);
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
