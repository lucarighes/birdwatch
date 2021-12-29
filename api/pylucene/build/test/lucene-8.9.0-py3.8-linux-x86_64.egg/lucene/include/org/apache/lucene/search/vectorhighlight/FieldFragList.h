#ifndef org_apache_lucene_search_vectorhighlight_FieldFragList_H
#define org_apache_lucene_search_vectorhighlight_FieldFragList_H

#include "java/lang/Object.h"

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
          class FieldFragList$WeightedFragInfo;
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

          class FieldFragList : public ::java::lang::Object {
           public:
            enum {
              mid_init$_040c4cd0390c5aff,
              mid_add_0579db43a3783deb,
              mid_getFragInfos_49ec78390f08338a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldFragList(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldFragList(const FieldFragList& obj) : ::java::lang::Object(obj) {}

            FieldFragList(jint);

            void add(jint, jint, const ::java::util::List &) const;
            ::java::util::List getFragInfos() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldFragList);
          extern PyTypeObject *PY_TYPE(FieldFragList);

          class t_FieldFragList {
          public:
            PyObject_HEAD
            FieldFragList object;
            static PyObject *wrap_Object(const FieldFragList&);
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
