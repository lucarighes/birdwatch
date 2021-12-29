#ifndef org_apache_lucene_queryparser_flexible_standard_config_StandardQueryConfigHandler$ConfigurationKeys_H
#define org_apache_lucene_queryparser_flexible_standard_config_StandardQueryConfigHandler$ConfigurationKeys_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Locale;
    class TimeZone;
  }
  namespace lang {
    class Float;
    class Class;
    class CharSequence;
    class Integer;
    class String;
    class Boolean;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class DateTools$Resolution;
      }
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace config {
              class FuzzyConfig;
              class StandardQueryConfigHandler$Operator;
              class PointsConfig;
            }
          }
          namespace core {
            namespace config {
              class ConfigurationKey;
            }
          }
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
    }
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

              class StandardQueryConfigHandler$ConfigurationKeys : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_f2cc1bce94666404,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardQueryConfigHandler$ConfigurationKeys(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StandardQueryConfigHandler$ConfigurationKeys(const StandardQueryConfigHandler$ConfigurationKeys& obj) : ::java::lang::Object(obj) {}

                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *ALLOW_LEADING_WILDCARD;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *ANALYZER;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *BOOST;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *DATE_RESOLUTION;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *DEFAULT_OPERATOR;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *ENABLE_POSITION_INCREMENTS;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *FIELD_BOOST_MAP;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *FIELD_DATE_RESOLUTION_MAP;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *FUZZY_CONFIG;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *LOCALE;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *MULTI_FIELDS;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *MULTI_TERM_REWRITE_METHOD;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *PHRASE_SLOP;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *POINTS_CONFIG;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *POINTS_CONFIG_MAP;
                static ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey *TIMEZONE;

                StandardQueryConfigHandler$ConfigurationKeys();
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
              extern PyType_Def PY_TYPE_DEF(StandardQueryConfigHandler$ConfigurationKeys);
              extern PyTypeObject *PY_TYPE(StandardQueryConfigHandler$ConfigurationKeys);

              class t_StandardQueryConfigHandler$ConfigurationKeys {
              public:
                PyObject_HEAD
                StandardQueryConfigHandler$ConfigurationKeys object;
                static PyObject *wrap_Object(const StandardQueryConfigHandler$ConfigurationKeys&);
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
