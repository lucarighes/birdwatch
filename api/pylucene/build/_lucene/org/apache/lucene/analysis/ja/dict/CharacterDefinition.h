#ifndef org_apache_lucene_analysis_ja_dict_CharacterDefinition_H
#define org_apache_lucene_analysis_ja_dict_CharacterDefinition_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
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

            class CharacterDefinition : public ::java::lang::Object {
             public:
              enum {
                mid_getCharacterClass_920874b8f5998fce,
                mid_getInstance_130a12a2a5322fc2,
                mid_isGroup_540573ecd04ffc16,
                mid_isInvoke_540573ecd04ffc16,
                mid_isKanji_540573ecd04ffc16,
                mid_lookupCharacterClass_5cc1cc3ee6dabd77,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit CharacterDefinition(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              CharacterDefinition(const CharacterDefinition& obj) : ::java::lang::Object(obj) {}

              static jbyte ALPHA;
              static jint CLASS_COUNT;
              static jbyte CYRILLIC;
              static jbyte DEFAULT;
              static ::java::lang::String *FILENAME_SUFFIX;
              static jbyte GREEK;
              static ::java::lang::String *HEADER;
              static jbyte HIRAGANA;
              static jbyte KANJI;
              static jbyte KANJINUMERIC;
              static jbyte KATAKANA;
              static jbyte NGRAM;
              static jbyte NUMERIC;
              static jbyte SPACE;
              static jbyte SYMBOL;
              static jint VERSION;

              jbyte getCharacterClass(jchar) const;
              static CharacterDefinition getInstance();
              jboolean isGroup(jchar) const;
              jboolean isInvoke(jchar) const;
              jboolean isKanji(jchar) const;
              static jbyte lookupCharacterClass(const ::java::lang::String &);
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
            extern PyType_Def PY_TYPE_DEF(CharacterDefinition);
            extern PyTypeObject *PY_TYPE(CharacterDefinition);

            class t_CharacterDefinition {
            public:
              PyObject_HEAD
              CharacterDefinition object;
              static PyObject *wrap_Object(const CharacterDefinition&);
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
