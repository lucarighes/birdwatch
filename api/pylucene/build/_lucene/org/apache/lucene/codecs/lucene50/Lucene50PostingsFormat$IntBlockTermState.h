#ifndef org_apache_lucene_codecs_lucene50_Lucene50PostingsFormat$IntBlockTermState_H
#define org_apache_lucene_codecs_lucene50_Lucene50PostingsFormat$IntBlockTermState_H

#include "org/apache/lucene/codecs/BlockTermState.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermState;
      }
      namespace codecs {
        namespace lucene50 {
          class Lucene50PostingsFormat$IntBlockTermState;
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
      namespace codecs {
        namespace lucene50 {

          class Lucene50PostingsFormat$IntBlockTermState : public ::org::apache::lucene::codecs::BlockTermState {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_clone_920af9bb2f7a63c6,
              mid_copyFrom_4291efa1cd29ac2a,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            enum {
              fid_docStartFP,
              fid_lastPosBlockOffset,
              fid_payStartFP,
              fid_posStartFP,
              fid_singletonDocID,
              fid_skipOffset,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene50PostingsFormat$IntBlockTermState(jobject obj) : ::org::apache::lucene::codecs::BlockTermState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene50PostingsFormat$IntBlockTermState(const Lucene50PostingsFormat$IntBlockTermState& obj) : ::org::apache::lucene::codecs::BlockTermState(obj) {}

            jlong _get_docStartFP() const;
            void _set_docStartFP(jlong) const;
            jlong _get_lastPosBlockOffset() const;
            void _set_lastPosBlockOffset(jlong) const;
            jlong _get_payStartFP() const;
            void _set_payStartFP(jlong) const;
            jlong _get_posStartFP() const;
            void _set_posStartFP(jlong) const;
            jint _get_singletonDocID() const;
            void _set_singletonDocID(jint) const;
            jlong _get_skipOffset() const;
            void _set_skipOffset(jlong) const;

            Lucene50PostingsFormat$IntBlockTermState();

            Lucene50PostingsFormat$IntBlockTermState clone() const;
            void copyFrom(const ::org::apache::lucene::index::TermState &) const;
            ::java::lang::String toString() const;
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
      namespace codecs {
        namespace lucene50 {
          extern PyType_Def PY_TYPE_DEF(Lucene50PostingsFormat$IntBlockTermState);
          extern PyTypeObject *PY_TYPE(Lucene50PostingsFormat$IntBlockTermState);

          class t_Lucene50PostingsFormat$IntBlockTermState {
          public:
            PyObject_HEAD
            Lucene50PostingsFormat$IntBlockTermState object;
            static PyObject *wrap_Object(const Lucene50PostingsFormat$IntBlockTermState&);
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
