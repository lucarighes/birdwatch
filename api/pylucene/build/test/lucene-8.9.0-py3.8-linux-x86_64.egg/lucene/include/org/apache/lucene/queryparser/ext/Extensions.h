#ifndef org_apache_lucene_queryparser_ext_Extensions_H
#define org_apache_lucene_queryparser_ext_Extensions_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {
          class ParserExtension;
          class Extensions$Pair;
        }
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
      namespace queryparser {
        namespace ext {

          class Extensions : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_b227b2c08d18d29e,
              mid_add_18f6d5622911e242,
              mid_buildExtensionField_9bfa75c9f141b67f,
              mid_buildExtensionField_04b762e0ad33dcc5,
              mid_escapeExtensionField_9bfa75c9f141b67f,
              mid_getExtension_9a1278aab770bdea,
              mid_getExtensionFieldDelimiter_8eea1dd85c3239c3,
              mid_splitExtensionField_da4ae0c58f1caabe,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Extensions(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Extensions(const Extensions& obj) : ::java::lang::Object(obj) {}

            static jchar DEFAULT_EXTENSION_FIELD_DELIMITER;

            Extensions();
            Extensions(jchar);

            void add(const ::java::lang::String &, const ::org::apache::lucene::queryparser::ext::ParserExtension &) const;
            ::java::lang::String buildExtensionField(const ::java::lang::String &) const;
            ::java::lang::String buildExtensionField(const ::java::lang::String &, const ::java::lang::String &) const;
            ::java::lang::String escapeExtensionField(const ::java::lang::String &) const;
            ::org::apache::lucene::queryparser::ext::ParserExtension getExtension(const ::java::lang::String &) const;
            jchar getExtensionFieldDelimiter() const;
            ::org::apache::lucene::queryparser::ext::Extensions$Pair splitExtensionField(const ::java::lang::String &, const ::java::lang::String &) const;
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
      namespace queryparser {
        namespace ext {
          extern PyType_Def PY_TYPE_DEF(Extensions);
          extern PyTypeObject *PY_TYPE(Extensions);

          class t_Extensions {
          public:
            PyObject_HEAD
            Extensions object;
            static PyObject *wrap_Object(const Extensions&);
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
