#ifndef org_apache_lucene_analysis_ja_dict_UnknownDictionary_H
#define org_apache_lucene_analysis_ja_dict_UnknownDictionary_H

#include "org/apache/lucene/analysis/ja/dict/BinaryDictionary.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class UnknownDictionary;
            class BinaryDictionary$ResourceScheme;
            class CharacterDefinition;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {

            class UnknownDictionary : public ::org::apache::lucene::analysis::ja::dict::BinaryDictionary {
             public:
              enum {
                mid_init$_1548dd30612cf831,
                mid_getCharacterDefinition_130a12a2a5322fc2,
                mid_getInflectionForm_d7593acad64ef635,
                mid_getInflectionType_d7593acad64ef635,
                mid_getInstance_a0ececa42eb06b0d,
                mid_getReading_467f88cdc3f1f7b5,
                mid_lookup_644fc0bf0aa7fb26,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UnknownDictionary(jobject obj) : ::org::apache::lucene::analysis::ja::dict::BinaryDictionary(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UnknownDictionary(const UnknownDictionary& obj) : ::org::apache::lucene::analysis::ja::dict::BinaryDictionary(obj) {}

              UnknownDictionary(const ::org::apache::lucene::analysis::ja::dict::BinaryDictionary$ResourceScheme &, const ::java::lang::String &);

              ::org::apache::lucene::analysis::ja::dict::CharacterDefinition getCharacterDefinition() const;
              ::java::lang::String getInflectionForm(jint) const;
              ::java::lang::String getInflectionType(jint) const;
              static UnknownDictionary getInstance();
              ::java::lang::String getReading(jint, const JArray< jchar > &, jint, jint) const;
              jint lookup(const JArray< jchar > &, jint, jint) const;
            };
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
      namespace analysis {
        namespace ja {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(UnknownDictionary);
            extern PyTypeObject *PY_TYPE(UnknownDictionary);

            class t_UnknownDictionary {
            public:
              PyObject_HEAD
              UnknownDictionary object;
              static PyObject *wrap_Object(const UnknownDictionary&);
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

#endif
