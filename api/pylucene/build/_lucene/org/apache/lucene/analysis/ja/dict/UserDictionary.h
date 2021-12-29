#ifndef org_apache_lucene_analysis_ja_dict_UserDictionary_H
#define org_apache_lucene_analysis_ja_dict_UserDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class TokenInfoFST;
            class UserDictionary;
            class Dictionary;
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
    class Reader;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {

            class UserDictionary : public ::java::lang::Object {
             public:
              enum {
                mid_getBaseForm_467f88cdc3f1f7b5,
                mid_getFST_37657c457a0c3bc0,
                mid_getInflectionForm_d7593acad64ef635,
                mid_getInflectionType_d7593acad64ef635,
                mid_getLeftId_1e143afe1894d213,
                mid_getPartOfSpeech_d7593acad64ef635,
                mid_getPronunciation_467f88cdc3f1f7b5,
                mid_getReading_467f88cdc3f1f7b5,
                mid_getRightId_1e143afe1894d213,
                mid_getWordCost_1e143afe1894d213,
                mid_lookup_00fa12a2772b039f,
                mid_lookupSegmentation_0bb5473d39bfe453,
                mid_open_c6abbfb581ae760e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UserDictionary(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UserDictionary(const UserDictionary& obj) : ::java::lang::Object(obj) {}

              static jint LEFT_ID;
              static jint RIGHT_ID;
              static jint WORD_COST;

              ::java::lang::String getBaseForm(jint, const JArray< jchar > &, jint, jint) const;
              ::org::apache::lucene::analysis::ja::dict::TokenInfoFST getFST() const;
              ::java::lang::String getInflectionForm(jint) const;
              ::java::lang::String getInflectionType(jint) const;
              jint getLeftId(jint) const;
              ::java::lang::String getPartOfSpeech(jint) const;
              ::java::lang::String getPronunciation(jint, const JArray< jchar > &, jint, jint) const;
              ::java::lang::String getReading(jint, const JArray< jchar > &, jint, jint) const;
              jint getRightId(jint) const;
              jint getWordCost(jint) const;
              JArray< JArray< jint > > lookup(const JArray< jchar > &, jint, jint) const;
              JArray< jint > lookupSegmentation(jint) const;
              static UserDictionary open(const ::java::io::Reader &);
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
            extern PyType_Def PY_TYPE_DEF(UserDictionary);
            extern PyTypeObject *PY_TYPE(UserDictionary);

            class t_UserDictionary {
            public:
              PyObject_HEAD
              UserDictionary object;
              static PyObject *wrap_Object(const UserDictionary&);
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
