#ifndef org_apache_lucene_analysis_ko_dict_BinaryDictionary_H
#define org_apache_lucene_analysis_ko_dict_BinaryDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
      }
      namespace analysis {
        namespace ko {
          namespace dict {
            class Dictionary$Morpheme;
            class Dictionary;
            class BinaryDictionary$ResourceScheme;
          }
          class POS$Type;
          class POS$Tag;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class InputStream;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {

            class BinaryDictionary : public ::java::lang::Object {
             public:
              enum {
                mid_getClassResource_df2b4677efc14b73,
                mid_getLeftId_1e143afe1894d213,
                mid_getLeftPOS_b8b0dfb882948f38,
                mid_getMorphemes_ec2d69830563855a,
                mid_getPOSType_b7cb9401295fad9c,
                mid_getReading_d7593acad64ef635,
                mid_getResource_37b08fdb683a7357,
                mid_getRightId_1e143afe1894d213,
                mid_getRightPOS_b8b0dfb882948f38,
                mid_getWordCost_1e143afe1894d213,
                mid_lookupWordIds_c36a226219ff2c18,
                mid_getResource_f9a3577e7bead470,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BinaryDictionary(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BinaryDictionary(const BinaryDictionary& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *DICT_FILENAME_SUFFIX;
              static ::java::lang::String *DICT_HEADER;
              static jint HAS_READING;
              static jint HAS_SINGLE_POS;
              static ::java::lang::String *POSDICT_FILENAME_SUFFIX;
              static ::java::lang::String *POSDICT_HEADER;
              static ::java::lang::String *TARGETMAP_FILENAME_SUFFIX;
              static ::java::lang::String *TARGETMAP_HEADER;
              static jint VERSION;

              static ::java::io::InputStream getClassResource(const ::java::lang::Class &, const ::java::lang::String &);
              jint getLeftId(jint) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getLeftPOS(jint) const;
              JArray< ::org::apache::lucene::analysis::ko::dict::Dictionary$Morpheme > getMorphemes(jint, const JArray< jchar > &, jint, jint) const;
              ::org::apache::lucene::analysis::ko::POS$Type getPOSType(jint) const;
              ::java::lang::String getReading(jint) const;
              static ::java::io::InputStream getResource(const ::org::apache::lucene::analysis::ko::dict::BinaryDictionary$ResourceScheme &, const ::java::lang::String &);
              jint getRightId(jint) const;
              ::org::apache::lucene::analysis::ko::POS$Tag getRightPOS(jint) const;
              jint getWordCost(jint) const;
              void lookupWordIds(jint, const ::org::apache::lucene::util::IntsRef &) const;
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
            extern PyType_Def PY_TYPE_DEF(BinaryDictionary);
            extern PyTypeObject *PY_TYPE(BinaryDictionary);

            class t_BinaryDictionary {
            public:
              PyObject_HEAD
              BinaryDictionary object;
              static PyObject *wrap_Object(const BinaryDictionary&);
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
