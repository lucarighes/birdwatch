#ifndef org_apache_lucene_search_vectorhighlight_SimpleFieldFragList_H
#define org_apache_lucene_search_vectorhighlight_SimpleFieldFragList_H

#include "org/apache/lucene/search/vectorhighlight/FieldFragList.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldPhraseList$WeightedPhraseInfo;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {

          class SimpleFieldFragList : public ::org::apache::lucene::search::vectorhighlight::FieldFragList {
           public:
            enum {
              mid_init$_040c4cd0390c5aff,
              mid_add_0579db43a3783deb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleFieldFragList(jobject obj) : ::org::apache::lucene::search::vectorhighlight::FieldFragList(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleFieldFragList(const SimpleFieldFragList& obj) : ::org::apache::lucene::search::vectorhighlight::FieldFragList(obj) {}

            SimpleFieldFragList(jint);

            void add(jint, jint, const ::java::util::List &) const;
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
        namespace vectorhighlight {
          extern PyType_Def PY_TYPE_DEF(SimpleFieldFragList);
          extern PyTypeObject *PY_TYPE(SimpleFieldFragList);

          class t_SimpleFieldFragList {
          public:
            PyObject_HEAD
            SimpleFieldFragList object;
            static PyObject *wrap_Object(const SimpleFieldFragList&);
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
