#ifndef org_apache_lucene_queryparser_flexible_standard_config_PointsConfig_H
#define org_apache_lucene_queryparser_flexible_standard_config_PointsConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class NumberFormat;
  }
  namespace lang {
    class Number;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace config {

              class PointsConfig : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3625cbd5c8220850,
                  mid_equals_8b72f2dcdde6fd1d,
                  mid_getNumberFormat_a56386c4cfd9cbe9,
                  mid_getType_9df2cc6ebce035fe,
                  mid_hashCode_9972fcc56b44e79d,
                  mid_setNumberFormat_cd4a218c853203a8,
                  mid_setType_67ec072891501dcc,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PointsConfig(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PointsConfig(const PointsConfig& obj) : ::java::lang::Object(obj) {}

                PointsConfig(const ::java::text::NumberFormat &, const ::java::lang::Class &);

                jboolean equals(const ::java::lang::Object &) const;
                ::java::text::NumberFormat getNumberFormat() const;
                ::java::lang::Class getType() const;
                jint hashCode() const;
                void setNumberFormat(const ::java::text::NumberFormat &) const;
                void setType(const ::java::lang::Class &) const;
              };
            }
          }
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
        namespace flexible {
          namespace standard {
            namespace config {
              extern PyType_Def PY_TYPE_DEF(PointsConfig);
              extern PyTypeObject *PY_TYPE(PointsConfig);

              class t_PointsConfig {
              public:
                PyObject_HEAD
                PointsConfig object;
                static PyObject *wrap_Object(const PointsConfig&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
