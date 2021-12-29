#ifndef org_apache_lucene_search_grouping_TopGroupsCollector_H
#define org_apache_lucene_search_grouping_TopGroupsCollector_H

#include "org/apache/lucene/search/grouping/SecondPassGroupingCollector.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class GroupSelector;
          class TopGroups;
          class SearchGroup;
        }
        class Sort;
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

          class TopGroupsCollector : public ::org::apache::lucene::search::grouping::SecondPassGroupingCollector {
           public:
            enum {
              mid_init$_bc84216dae697217,
              mid_getTopGroups_2a03f3c9fd50c0c8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TopGroupsCollector(jobject obj) : ::org::apache::lucene::search::grouping::SecondPassGroupingCollector(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TopGroupsCollector(const TopGroupsCollector& obj) : ::org::apache::lucene::search::grouping::SecondPassGroupingCollector(obj) {}

            TopGroupsCollector(const ::org::apache::lucene::search::grouping::GroupSelector &, const ::java::util::Collection &, const ::org::apache::lucene::search::Sort &, const ::org::apache::lucene::search::Sort &, jint, jboolean);

            ::org::apache::lucene::search::grouping::TopGroups getTopGroups(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(TopGroupsCollector);
          extern PyTypeObject *PY_TYPE(TopGroupsCollector);

          class t_TopGroupsCollector {
          public:
            PyObject_HEAD
            TopGroupsCollector object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_TopGroupsCollector *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const TopGroupsCollector&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const TopGroupsCollector&, PyTypeObject *);
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
