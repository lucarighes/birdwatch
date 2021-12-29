#ifndef org_apache_lucene_analysis_tokenattributes_KeywordAttribute_H
#define org_apache_lucene_analysis_tokenattributes_KeywordAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class KeywordAttribute : public ::org::apache::lucene::util::Attribute {
           public:
            enum {
              mid_isKeyword_8454bd5aa23fd11e,
              mid_setKeyword_9d72768e8fdce2b7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeywordAttribute(const KeywordAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            jboolean isKeyword() const;
            void setKeyword(jboolean) const;
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
      namespace analysis {
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(KeywordAttribute);
          extern PyTypeObject *PY_TYPE(KeywordAttribute);

          class t_KeywordAttribute {
          public:
            PyObject_HEAD
            KeywordAttribute object;
            static PyObject *wrap_Object(const KeywordAttribute&);
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
