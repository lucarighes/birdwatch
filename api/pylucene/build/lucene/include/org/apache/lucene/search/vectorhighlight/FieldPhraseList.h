#ifndef org_apache_lucene_search_vectorhighlight_FieldPhraseList_H
#define org_apache_lucene_search_vectorhighlight_FieldPhraseList_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace vectorhighlight {
          class FieldTermStack;
          class FieldQuery;
          class FieldPhraseList$WeightedPhraseInfo;
          class FieldPhraseList;
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

          class FieldPhraseList : public ::java::lang::Object {
           public:
            enum {
              mid_init$_8519bd74d326741b,
              mid_init$_f812552c39df4392,
              mid_init$_08f179f23b93129b,
              mid_addIfNoOverlap_bc2295d06c8d64dc,
              mid_getPhraseList_49ec78390f08338a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldPhraseList(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldPhraseList(const FieldPhraseList& obj) : ::java::lang::Object(obj) {}

            FieldPhraseList(const JArray< FieldPhraseList > &);
            FieldPhraseList(const ::org::apache::lucene::search::vectorhighlight::FieldTermStack &, const ::org::apache::lucene::search::vectorhighlight::FieldQuery &);
            FieldPhraseList(const ::org::apache::lucene::search::vectorhighlight::FieldTermStack &, const ::org::apache::lucene::search::vectorhighlight::FieldQuery &, jint);

            void addIfNoOverlap(const ::org::apache::lucene::search::vectorhighlight::FieldPhraseList$WeightedPhraseInfo &) const;
            ::java::util::List getPhraseList() const;
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
          extern PyType_Def PY_TYPE_DEF(FieldPhraseList);
          extern PyTypeObject *PY_TYPE(FieldPhraseList);

          class t_FieldPhraseList {
          public:
            PyObject_HEAD
            FieldPhraseList object;
            static PyObject *wrap_Object(const FieldPhraseList&);
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
