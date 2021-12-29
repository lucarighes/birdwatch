#ifndef org_apache_lucene_search_grouping_GroupingSearch_H
#define org_apache_lucene_search_grouping_GroupingSearch_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace search {
        class IndexSearcher;
        namespace grouping {
          class GroupSelector;
          class TopGroups;
          class GroupingSearch;
        }
        class Sort;
        class Query;
      }
      namespace queries {
        namespace function {
          class ValueSource;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
  }
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
        namespace grouping {

          class GroupingSearch : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9fd2eb66a64e6f0f,
              mid_init$_ede25bb9d48237ac,
              mid_init$_acfcf289281f56c3,
              mid_init$_993be4c0868840e8,
              mid_disableCaching_86b7822021a982ed,
              mid_getAllGroupHeads_ad87da2b626b21cf,
              mid_getAllMatchingGroups_d4dfbf7a26ff41df,
              mid_search_ab60d5515b02cd88,
              mid_setAllGroupHeads_e961b984ae24228a,
              mid_setAllGroups_e961b984ae24228a,
              mid_setCaching_252e6ecca11ca205,
              mid_setCachingInMB_006f3e02a3042494,
              mid_setGroupDocsLimit_340318fae5a9fea2,
              mid_setGroupDocsOffset_340318fae5a9fea2,
              mid_setGroupSort_ad399f645c86e223,
              mid_setIncludeMaxScore_e961b984ae24228a,
              mid_setSortWithinGroup_ad399f645c86e223,
              mid_groupByFieldOrFunction_ab60d5515b02cd88,
              mid_groupByDocBlock_ab60d5515b02cd88,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupingSearch(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupingSearch(const GroupingSearch& obj) : ::java::lang::Object(obj) {}

            GroupingSearch(const ::java::lang::String &);
            GroupingSearch(const ::org::apache::lucene::search::Query &);
            GroupingSearch(const ::org::apache::lucene::search::grouping::GroupSelector &);
            GroupingSearch(const ::org::apache::lucene::queries::function::ValueSource &, const ::java::util::Map &);

            GroupingSearch disableCaching() const;
            ::org::apache::lucene::util::Bits getAllGroupHeads() const;
            ::java::util::Collection getAllMatchingGroups() const;
            ::org::apache::lucene::search::grouping::TopGroups search(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, jint, jint) const;
            GroupingSearch setAllGroupHeads(jboolean) const;
            GroupingSearch setAllGroups(jboolean) const;
            GroupingSearch setCaching(jint, jboolean) const;
            GroupingSearch setCachingInMB(jdouble, jboolean) const;
            GroupingSearch setGroupDocsLimit(jint) const;
            GroupingSearch setGroupDocsOffset(jint) const;
            GroupingSearch setGroupSort(const ::org::apache::lucene::search::Sort &) const;
            GroupingSearch setIncludeMaxScore(jboolean) const;
            GroupingSearch setSortWithinGroup(const ::org::apache::lucene::search::Sort &) const;
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
          extern PyType_Def PY_TYPE_DEF(GroupingSearch);
          extern PyTypeObject *PY_TYPE(GroupingSearch);

          class t_GroupingSearch {
          public:
            PyObject_HEAD
            GroupingSearch object;
            static PyObject *wrap_Object(const GroupingSearch&);
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
