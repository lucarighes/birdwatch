#ifndef org_apache_lucene_search_vectorhighlight_FieldQuery$QueryPhraseMap_H
#define org_apache_lucene_search_vectorhighlight_FieldQuery$QueryPhraseMap_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
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
          class FieldQuery;
          class FieldTermStack$TermInfo;
          class FieldQuery$QueryPhraseMap;
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

          class FieldQuery$QueryPhraseMap : public ::java::lang::Object {
           public:
            enum {
              mid_init$_579f1866c90fb32a,
              mid_getBoost_58aec2b64dff50c8,
              mid_getSlop_9972fcc56b44e79d,
              mid_getTermMap_c95609a3317c4e48,
              mid_getTermOrPhraseNumber_9972fcc56b44e79d,
              mid_isTerminal_8454bd5aa23fd11e,
              mid_isValidTermOrPhrase_d6092cb398c1d339,
              mid_searchPhrase_c4084fa49ad9df1e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldQuery$QueryPhraseMap(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldQuery$QueryPhraseMap(const FieldQuery$QueryPhraseMap& obj) : ::java::lang::Object(obj) {}

            FieldQuery$QueryPhraseMap(const ::org::apache::lucene::search::vectorhighlight::FieldQuery &);

            jfloat getBoost() const;
            jint getSlop() const;
            FieldQuery$QueryPhraseMap getTermMap(const ::java::lang::String &) const;
            jint getTermOrPhraseNumber() const;
            jboolean isTerminal() const;
            jboolean isValidTermOrPhrase(const ::java::util::List &) const;
            FieldQuery$QueryPhraseMap searchPhrase(const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(FieldQuery$QueryPhraseMap);
          extern PyTypeObject *PY_TYPE(FieldQuery$QueryPhraseMap);

          class t_FieldQuery$QueryPhraseMap {
          public:
            PyObject_HEAD
            FieldQuery$QueryPhraseMap object;
            static PyObject *wrap_Object(const FieldQuery$QueryPhraseMap&);
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
