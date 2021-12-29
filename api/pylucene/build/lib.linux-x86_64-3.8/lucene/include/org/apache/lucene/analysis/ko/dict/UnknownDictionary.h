#ifndef org_apache_lucene_analysis_ko_dict_UnknownDictionary_H
#define org_apache_lucene_analysis_ko_dict_UnknownDictionary_H

#include "org/apache/lucene/analysis/ko/dict/BinaryDictionary.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
            class UnknownDictionary;
            class BinaryDictionary$ResourceScheme;
            class CharacterDefinition;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {

            class UnknownDictionary : public ::org::apache::lucene::analysis::ko::dict::BinaryDictionary {
             public:
              enum {
                mid_init$_6cf983c700d51b23,
                mid_getCharacterDefinition_d0e010fc051a8323,
                mid_getInstance_be289d0f0797b46b,
                mid_getMorphemes_ec2d69830563855a,
                mid_getReading_d7593acad64ef635,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UnknownDictionary(jobject obj) : ::org::apache::lucene::analysis::ko::dict::BinaryDictionary(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UnknownDictionary(const UnknownDictionary& obj) : ::org::apache::lucene::analysis::ko::dict::BinaryDictionary(obj) {}

              UnknownDictionary(const ::org::apache::lucene::analysis::ko::dict::BinaryDictionary$ResourceScheme &, const ::java::lang::String &);

              ::org::apache::lucene::analysis::ko::dict::CharacterDefinition getCharacterDefinition() const;
              static UnknownDictionary getInstance();
              JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getReading(jint) const;
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
        namespace ko {
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
