#ifndef org_apache_lucene_search_grouping_GroupFacetCollector$FacetEntry_H
#define org_apache_lucene_search_grouping_GroupFacetCollector$FacetEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupFacetCollector$FacetEntry : public ::java::lang::Object {
           public:
            enum {
              mid_init$_327a6f4e8624d9f4,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getCount_9972fcc56b44e79d,
              mid_getValue_7af2ea2e37ce82b8,
              mid_hashCode_9972fcc56b44e79d,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupFacetCollector$FacetEntry(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupFacetCollector$FacetEntry(const GroupFacetCollector$FacetEntry& obj) : ::java::lang::Object(obj) {}

            GroupFacetCollector$FacetEntry(const ::org::apache::lucene::util::BytesRef &, jint);

            jboolean equals(const ::java::lang::Object &) const;
            jint getCount() const;
            ::org::apache::lucene::util::BytesRef getValue() const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(GroupFacetCollector$FacetEntry);
          extern PyTypeObject *PY_TYPE(GroupFacetCollector$FacetEntry);

          class t_GroupFacetCollector$FacetEntry {
          public:
            PyObject_HEAD
            GroupFacetCollector$FacetEntry object;
            static PyObject *wrap_Object(const GroupFacetCollector$FacetEntry&);
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
